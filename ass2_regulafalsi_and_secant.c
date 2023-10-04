#include <stdio.h>
#include <math.h>
float f(float x)
{
	return ((x*x*x)-x-0.1);
}
void regula_falsi( )
{
	float a=0.0, b=1.0, x=0.0, y=0.0, err;
	while(f(a)*f(b)>0)
	{
		a=a--;
		b=b++;
	}
	printf("Enter the error: ");
	scanf("%f",&err);
	printf("\n\troot lies between: %f and %f",a,b);
	printf("\n\n  a(-ve)\tb(+ve)\t    f(a)\t     f(b)\t    x\t      f(x)");
	printf("\n----------------------------------------------------------------------------\n");



	if(f(a)>0)
		{
			a=a+b;
			b=a-b;
			a=a-b;
		}
		do
		{
			y=x;
			x=a-((f(a)/(f(b)-f(a)))*(b-a));
 		 	printf("\n %.4f\t\t%.4f\t   %.4f\t  %.4f\t%.4f\t\t%.4f",a,b,f(a),f(b),x,f(x));
			if(f(x)<0)
				a=x;
			else
				b=x;
		}while(fabs(x-y)>err);
		printf("\n\nThe root is: %.4f",x);
}

void secant( )
{

	float a= -1.0, b=0.0, x=0.0, y=0.0, err;
	while(f(a)*f(b)>0)
	{ 
		a=a-1.0;	
		b=b+1.0;
	}
	printf("\n\tRoot lies between: %f and %f",a,b);
	printf("\n\tEnter Err: ");
	scanf("%f",&err);
	printf("\n\n\t   a\t\t   b\t\t     x");
	printf("\n\t----------------------------------------\n");
	if(f(a) > 0)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	do
	{
	 	y=x;
		x=b-((f(b)/(f(b)-f(a)))*(b-a));
		if(f(x) < 0)
	        a=x;
		else
			b=x;

		printf("\n\t%f\t%f\t%f",a,b,x);
	  } while(fabs(x-y) > err);

	 printf("\n\t----------------------------------------\n");
         	printf("\n\tAnswer: %.4f  (correct upto 4 decimal places)",x);

}


void main()
{

    int choice;
    printf("1. Regula Falsi method\n2. Secant method\n3. Exit\n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    do
    {
        switch(choice)
        {
        case 1: regula_falsi();
                break;
        case 2: secant();
                break;
        case 3: printf("Goodbye");

        default: printf("\nInvalid input");
        }
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
    }while(choice!=3);
}