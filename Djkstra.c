#include<stdio.h>
void main()
{
	int cost[10][10];
	int distance[10], visited[10];
	int n, i, j, u, e, mindis, count, nextvertex;
	char vertex_name[6]={'P','Q','R','S','U','V'};
	
	printf("Enter number of vertex : ");
	scanf("%d", &n);
	
	printf("Enter the cost matrix of graph :\n");
	//Initialize cost matrix
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &cost[i][j]);
			if(cost[i][j] == 0)
				cost[i][j] = 99;
		}
	}
	
	printf("Enter the starting vertex : ");
	scanf("%d", &u);
	
	//Initialize distance cost
	for(i=0; i<n; i++)
	{
		distance[i] = cost[u][i];
		visited[i] = 0;
	}
	
	visited[u] = 1;
	distance[u] = 0;
	count = 1;
		
	while(count<n-1)
	{
		//Find the minimum distance
		mindis = 99;
		for(i=0; i<n; i++){
			if(mindis > distance[i] && visited[i]==0){
				mindis = distance[i];
				nextvertex = i;
			}				
		}
		//Find the minimum distance from nextvertex
		visited[nextvertex] = 1;
		for(i=0; i<n; i++){
			if(distance[i] > mindis + cost[nextvertex][i] && visited[i]==0)
				distance[i] = mindis + cost[nextvertex][i];	}	
		count++;		
	}
	printf("Enter the ending vertex: ");
	scanf("%d", &e);
	
	printf("\nthe shortest path between the two vertices %c and %c is %d\n", vertex_name[u], vertex_name[e], distance[e]);
}
