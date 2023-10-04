#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float mat[3][4],k,l,m;
	float x,y,z;
	int i,j;
	
	clrscr();
	
	printf("\n-----gauss elimination_-----");
	printf("\n Enter the elements of the matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%f",&mat[i][j]);
		}
	}
	printf("\n\nThe given matrix is:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f\t",mat[i][j]);
			printf("\n");
		}
		
	}
}
