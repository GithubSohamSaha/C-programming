#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n, i, j, k, u, v, count=0;
	
	printf("Enter number of vertices(Here no. of vertices = no. of color) :");
	scanf("%d", &n);
	
	int adj[n][n];
	int color[n], colorused[n];
	char col[n];
	//Input Adjacency Matrix
	printf("Now,enter the adjacency matrix of the graph: \n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &adj[i][j]);
	
	fflush(stdin);
	printf("Enter the color set(Use the first letter of color to represent itself,Ex:- R for Red):\n");
	gets(col);
	
	//Set all the colors unused		
	for(i=0; i<n; i++)
		color[i] = -1;
	
	//Set first node color
	color[0] = 0;
	
	//Color the rest of the nodes
	for(u=1; u<n; u++){
		//Set all the adjacent nodes colors as -1
		for(i=0; i<n; i++)
			colorused[i] = -1;
		
		//Find the nodes adjacent and colored
		for(v=0; v<n; v++){
			if(adj[u][v]==1 && color[v]!=-1)
				colorused[color[v]] = 1;	//set all the used colors
		}
		
		//Find the unused color for vertex u
		for(k=0; k<n; k++){
			if(colorused[k]==-1)
				break;
		}
		
		color[u] = k;
		
		if(count<k)	
			count = k;
			
	}
	
	printf("\n\nRequired color used for vertices are: \n");
	for(i=0; i<n; i++)
		printf("%d  ", i);
	printf("\n");
	for(i=0; i<n; i++)
		printf("%c  ", col[color[i]]);
		
	printf("\n\nColor used in the graph coloring problem: ");
	for(i=0; i<=count; i++)
		printf("%c ", col[i]);
}
