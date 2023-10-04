//Write a program to implement the DFS algorithm
#include<stdio.h>
dfs(int arr[10][10], int n){
	int SPT[10][10] = {0}, stack[10], visited[10], traversal[10];
	int i,j,v,k,top;
	
	//Storing -1 value in visited array
	for(i=0; i<n; i++)
		visited[i] = -1;
	
	//Taking starting vertex as an input form user
	printf("Enter the starting vertex : ");
	scanf("%d", &v);
	
	top = -1;
	visited[v] = 1;
	k = 0;
	traversal[k] = v+65;
	//calculating selected edges and spanning tree
	while(1){
		for(i=0; i<n; i++){
			if(arr[v][i]==1 && visited[i]==-1){
				top++;
				stack[top] = i;
				visited[i] = 1;
				printf("%d-->%d\n", v, i);//selected edges
				SPT[v][i] = SPT[i][v] = 1;//spanning tree
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
	printf("\nSpanning tree of the graph using BFS traversal is:\n");//Displaying spanning tree
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ", SPT[i][j]);
		printf("\n");
	}
}
void main(){
	int arr[10][10];
	int i,j,n;
	//Taking number of vertices from user
	printf("Enter number of vertex : ");
	scanf("%d", &n);
	
	//Taking adjacency from user
	printf("\nEnter adjacency matrix :\n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);	
	dfs(arr, n);//User function for dfs algorithm
}


