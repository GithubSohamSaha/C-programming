#include<stdio.h>
void main()
{
	int i, j, p, q;
	int n, c, min, mincost=0, flag, count;
	int cost[10][10], visited[10];
	int spt[10][10]={0};
	printf("Enter number of vertices : ");
	scanf("%d", &n);
	printf("Enter the cost matrix :\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j] = 99;
		}
	}
	//Initialize visited array with 0
	for(i=0; i<n; i++)
		visited[i] = -1;
	count = 1;
	printf("\nThe travarsal list is: \n");
	while(count<n)	//Loop untill all the vertices found
	{
		min = 99;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(cost[i][j]<min){
					min = cost[i][j];
					p = i;
					q = j;
				}
			}
		}
		//spt[p][q] = spt[p][q] = 1;
		flag = 0;
		//If both are not visited
		if(visited[p]==-1 && visited[q]==-1){
			visited[p] = visited[q] = p;
			flag = 1;
		}
		//If p vertex not visited
		else if(visited[p]==-1){
			visited[p] = visited[q];
			flag = 1;
		}
		//If q vertex not visited
		if(visited[q]==-1){
			visited[q] = visited[p];
			flag = 1;
		}
		//If both visited but not in same component
		else if(visited[p] != visited[q]){
			c = visited[p];
			//Make all the vertices connected with p and q are in same component 
			for(i=0; i<n; i++)
				if(visited[i]==c)
					visited[i] = visited[q];
			flag = 1;
		}
		//if new edge found
		if(flag==1){
			printf("%c %c --> %d\n", p+65, q+65, min);
			mincost = mincost + min;
			count++;
			spt[p][q] = spt[q][p] = 1;
		}
		
		cost[p][q] = cost[q][p] = 99;
	}
	printf("Minimum cost is %d\n", mincost);
	printf("Minimal spanning tree: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ",spt[i][j]);
		printf("\n");
	}
}

