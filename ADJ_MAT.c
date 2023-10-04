#include<stdio.h>
void main()
{
	// sor= source vertex, des= destination, degree->count
	int  n, m, i, j,sor,des,count;
	printf("Enter the number of vertex: ");
	scanf("%d", &n);
	//max edge for an undircted graph
	m = (n*(n-1))/2;
	int adj[n][n];
	//initialize the adj matrix to 0
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			adj[i][j] = 0 ;	
	printf("\nEnter the connected edges: \n")	;	
	for(i=1; i<=m; i++)
	{
	  printf("\nEdge number %d is placed between: ",i)	;
	  scanf("%d %d",&sor,&des);  
	   if( (sor == -1) && (des == -1) ) // if no edges left then break
              break;
	   else
		{
			adj[sor][des] = 1; // puting  1 in connected  adjacent vertex
	  		adj[des][sor] = 1;
		}
	}
	printf("\nThe Adjacency matrix is: \n")	;	
	for(i=0;i<n;i++)	//print Adjacency matrix
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",adj[i][j]);	
		}
		printf("\n");
	}
	printf("The degree of each vertex: ");
	for(i=0; i<n; i++)
	{
		count = 0;
		for(j=0; j<n; j++)
			{
				if(adj[i][j] == 1) //count degree of each node
					count++;
			}
			printf("\n%c -> %d",i+65,count);
	}
}
