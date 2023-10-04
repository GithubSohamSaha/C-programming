#include<stdio.h>
void main()
{
	int i, j, p, q;
	int n, count, min, mincost=0;
	int cost[10][10], visited[10];
	int spt[10][10]={0};
	printf("Enter number of vertices of the graph: \n");
	scanf("%d", &n);
	
	printf("\nEnter the cost matrix of the graph:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j] = 99;
		}
	}
	//Initialize visited array with 0
	for(i=0; i<n; i++)
		visited[i] = 0;
	visited[0] = 1;	//Starting vertex set as visited
	count = 1;
	printf("\nminimum edge connected with visited vertices:\n");
	while(count<n)	//Loop untill all the vertices found
	{
		//Find the minimum edge connected with visited vertices
		min = 99;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(cost[i][j]<min && visited[i]==1){
					min = cost[i][j];
					p = i;
					q = j;
				}
			}
		}
		//if q is not visited yet
		if(visited[q]==0){
			printf("%d %d --> %d\n", p, q, min);
			mincost = mincost + min;
			visited[q]=1;
			count++;
			spt[p][q] = spt[q][p] = 1;
		}
		cost[p][q] = cost[q][p] = 99;
	}
	printf("The minimum cost of the graph is %d\n", mincost);
	printf("Minimal spanning tree of the graph is: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ",spt[i][j]);
		printf("\n");
	}	
}

