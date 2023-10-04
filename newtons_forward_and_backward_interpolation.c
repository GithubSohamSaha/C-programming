#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//creating the difference table
void diff_table(float a[10][10], int n)
{
	int i, j;
	
	printf("Enter values of x and y :\n");
	for(i=0; i<n; i++)
		scanf("%f%f", &a[i][0], &a[i][1]);
		
	for(j=2; j<=n; j++)
		for(i=0; i<n-j+1; i++)
			a[i][j] = a[i+1][j-1] - a[i][j-1];

	printf("\n\nThe Difference Table is\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i+1; j++)
			printf("%0.4f\t", a[i][j]);
		printf("\n");
	}
}

void new_forward(float a[][10], int n)
{
	float x, h, u, y, temp, fact,z;
	int i, j;
	
	printf("Enter the x value : ");
	scanf("%f", &x);
	
	h = a[1][0] - a[0][0];
	u = (x - a[0][0])/h;
	temp = 1;
	fact = 1;
	y = a[0][1];
	//calculating the y=f(x) using Newton's froward interpolation formula
	for(i=1; i<n; i++){
		temp = temp*(u-(i-1));
		fact = fact*i;
		y = y + temp/fact*a[0][i+1];
	}
	
	printf("y = %f", y);
}

void new_backward(float a[][10], int n)
{
	float x, h, u, y, temp, fact;
	int i, j;
	
	printf("Enter the x value : ");
	scanf("%f", &x);
	
	h = a[1][0] - a[0][0];
	u = (x - a[n-1][0])/h;
	temp = 1;
	fact = 1;
	y = a[n-1][1];
	//calculating the y=f(x) using Newton's backward interpolation formula
	for(i=1; i<n; i++)
	{
		temp = temp*(u+(i-1));
		fact = fact*i;
		y = y + temp*a[n-1-i][i+1]/fact;
	}
	
	printf("y = %f", y);
}

void main()
{
	float a[10][10];
	int n, choice,i,j;
	//making the selection section 
	printf("\n1. Newton's Forward interpolation\n2. Newton's Backward interpolation\n3. Exit\n");
	printf("\nEnter a choice : ");
	scanf("%d", &choice);
	printf("Enter number of values : ")	;
	scanf("%d", &n);
	while(1)
	{
		switch(choice)
		{
			case 1: diff_table(a, n);
					new_forward(a, n);
						break;
			case 2: diff_table(a, n);
					new_backward(a, n);
						break;
			case 3: printf("Goodbye");
						exit(0);
			default: printf("Invalid input");
		}
		printf("\nEnter a choice : ");
		scanf("%d", &choice);
	}
}

