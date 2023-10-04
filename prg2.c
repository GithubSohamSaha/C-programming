#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[6][6],i,j,r,c;
	printf("Enter the number of row :");
	scanf("%d",&r);
	printf("\nEnter the number of column :");
	scanf("%d",&c);
	for(i=0;i<r;i++)	
	{
		a[i][0]=((i+1)*(i+1)*(i+1));
		for(j=1;j<c;j++)
		{
			a[i][j]=0;
		}
	}
	printf("\nthe array is as printed \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
			printf("\n");
	}
}
