//Write a program to implement the DFS algorithm
#include<stdio.h>
dfs(int arr[10][10], int n){
	int stack[10], visited[10], traversal[10];
	int i,j,v,k,top;
	//Storing -1 value in visited array
	for(i=0; i<n; i++)
		visited[i] = -1;
	printf("Enter the starting vertex : ");
	scanf("%d", &v);
	top = -1;
	visited[v] = 1;
	k = 0;
	traversal[k] = v+65;
	//calculating selected edges and spanning tree
	printf("\nSelected Edges: \n");
	while(1){
		for(i=0; i<n; i++){
			if(arr[v][i]==1 && visited[i]==-1){
				top++;
				stack[top] = i;
				visited[i] = 1;
				printf("---------\n");
				printf("|%c-->%c|\n", v+65, i+65);//selected edges
				traversal[++k] = i+65;			
			}
		}
		if(top!=-1){
			v = stack[top];
			top--;
		}
		else 
			break;
	}
	printf("---------\n");
	printf("\nThe traversal list is: ");//Displaying Traversal vertex
	for(i=0; i<n; i++){
		printf("%c ", traversal[i]);
	}
}
void main(){
	int arr[10][10];
	int i,j,n;
	//Taking number of vertices from user
	printf("Enter number of vertex of the graph : ");
	scanf("%d", &n);
	//Taking adjacency from user
	printf("\nNow, enter the adjacency matrix :\n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
	dfs(arr, n);
}

