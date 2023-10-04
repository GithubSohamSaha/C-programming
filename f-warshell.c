#include<stdio.h>
int main()
{
	int n, i, j, k;
	int cost[10][10], matrix[10][10];
	
	printf("Enter the number of vertices : ");
	scanf("%d", &n);
	
	printf("Enter the cost matrix : \n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &cost[i][j]);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(cost[i][j]==0 && i!=j)
				matrix[i][j] = 999;
			else
				matrix[i][j] = cost[i][j];
		}
	}
	
	for(k=0; k<n; k++)		
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				if (matrix[i][j] > matrix[i][k] + matrix[k][j])
					matrix[i][j] = matrix[i][k] + matrix[k][j];
	printf("\nAll the pair of shortest distance of the given graph is: \n");
	printf("\n  A  B  C  D  E \n");
	printf("---------------\n");
	for(i=0; i<n; i++){
		printf("%c|", i+65);
		for(j=0; j<n; j++)
			printf("%d  ",matrix[i][j]);
		printf("\n");
	}	
}
