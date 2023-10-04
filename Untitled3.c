#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void Gauss_Jacobi(float a[3][4])
{
	int i, j;
	float x1, x2, x3, nextx1, nextx2, nextx3;	

	
	x1 = x2 = x3 = 0;
	printf("\nK\tX1\tX2\tX3\n");
	printf("________________________________________\n");
	for(i=1; i<=10; i++)
	{
		printf("%d\t%.3f\t%.3f\t%.3f\n",i, x1, x2, x3);
		
		nextx1 = (a[0][3] - a[0][1]*x2 - a[0][2]*x3)/a[0][0];
		nextx2 = (a[1][3] - a[1][0]*x1 - a[1][2]*x3)/a[1][1];
		nextx3 = (a[2][3] - a[2][0]*x1 - a[2][1]*x2)/a[2][2];
		
		x1 = nextx1;
		x2 = nextx2;
		x3 = nextx3;
    }
    printf("\n X1 = %.3f\t X2 = %.3f\t X3 = %.3f\t", nextx1, nextx2, nextx3);
}

void Gauss_Seidal(float a[3][4])
{
	int i, j;
	float x1, x2, x3;

	
	x1 = x2 = x3 = 0;
	
	printf("\nK\tX1\tX2\tX3\n");
	printf("________________________________________\n");
	for(i=1; i<=10; i++)
	{
		printf("%d\t%.3f\t%.3f\t%.3f\n",i, x1, x2, x3);
		
		x1 = (a[0][3] - a[0][1]*x2 - a[0][2]*x3)/a[0][0];
		x2 = (a[1][3] - a[1][0]*x1 - a[1][2]*x3)/a[1][1];
		x3 = (a[2][3] - a[2][0]*x1 - a[2][1]*x2)/a[2][2];
    }
   printf("\n X1 = %f\t X2 = %f\t X2 = %f\t", x1, x2, x3);
}
void main()
{
	int i,j, choice;
	float a[3][4];
	
	printf("\n1. Gauss Jacobi Elimination Method\n2. Gauss Seidal Elimination Method\n3. Exit\n");
	printf("\nEnter a choice : ");
	scanf("%d", &choice);
	
	printf("Enter augumented matrix : \n");
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			scanf("%f", &a[i][j]);
	
	
	while(1)
	{
		switch(choice)
		{
			case 1: Gauss_Jacobi(a);
						break;
			case 2: Gauss_Seidal(a);
						break;
			case 3: printf("Goodbye");
						exit(0);
			default: printf("Invalid input");
		}
		printf("\nEnter a choice : ");
		scanf("%d", &choice);
	}
}
