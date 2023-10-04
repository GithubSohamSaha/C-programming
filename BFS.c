//Write a programe to implement Breadth First Search(BFS) algorithm
#include<stdio.h>
void main()
{
	int arr[10][10], SPT[10][10] = {0}, q[10], visited[10]; //Declaring the arrays for adjacency matrix and spanning tree
	int i, j;
	int n, v, f, r;
	printf("Enter number of vertex : "); //Taking the inputs...
	scanf("%d", &n);
	printf("Now,Enter the adjacency matrix of the graph:\n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
	for(i=0; i<n; i++)
		visited[i] = -1;
	printf("Enter the starting vertex to procced further: "); //Entering the starting matrix
	scanf("%d", &v);
	f = r = 0;
	q[r] = v;
	visited[v] = 1;
	printf("\nNow the Selected edges are as below:-\n");
	while(1)
	{
		for(i=0; i<n; i++)
		{
			if(arr[v][i]==1 && visited[i]==-1)
			{
				r++;
				q[r] = i;
				visited[i] = 1;	
				printf("---------\n");
				printf("|%c --> %c|\n", v+65, i+65); //Printing the Edges which are selected
				SPT[v][i] = SPT[i][v] = 1;
			}
		}
		f++;
		if(f<=r) v = q[f];
		else break;
	}
	printf("---------\n");
	printf("\nThe traversal list is: \n");
	for(i=0; i<n; i++){
		printf("%c\t", q[i]+65);
	}
}

