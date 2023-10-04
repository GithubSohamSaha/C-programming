//Find the root of f(x) = 4*x-sin(x)-1  using Bisection Method

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//User defined function that contains the f(x)
float f(float x)
{
	return ( 4*x-sin(x)-1 );	
}
//User defined function that contains the derivation of f(x)
float df(float x)
{
	return ( 4-cos(x) );	
}
void bisection(float a,float b)
{
    float c;
    printf("Enter the value of a: ");
    scanf("%f",&a);	
    printf("\nEnter the value of b: ");
    scanf("%f",&b);	
	
    if(f(a)*f(b)<0)
    {
        printf("\n\n\t a(-ve)\t\t b(+ve)\t\t    c\t\t      f(c)");
        printf("\n\t-------------------------------------------------------------\n");
        if(f(a)>0)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        while(fabs(b-a) > 0.00001)  //Finding the approximate root's value      
        {
             c = (a+b)/2;
             printf("\n\t| %f\t| %f\t| %f\t|  %f",a,b,c,f(c));
	   if(f(c)== 0.0)
              {
                   printf("\nThe root is : %f ",c);
                   exit(0);
               }
              else if(f(c) > 0.0)
		 b = c;
	   else 
		 a = c;
         }
		printf("\nThe approximate root is : %.03f ",c);
    }
    else 
		printf("\nInvalid input");
}
void newton_raphson(double x)
{
        double h;
       
        printf("\nEnter value of x : ");
        scanf("%lf", &x);
       
        printf(" x                              f(x)                         df(x)                      h                x = x + h\n");
        printf("---------------------------------------------------------------------------------\n");
       
        h = -f(x)/df(x);
        while(fabs(h) > 0.0000001)          //Finding the approximate root's value 
        {
                        printf("   %lf\t|   %lf\t|   %lf\t|   %lf\t|   %lf\t|\n",x,f(x),df(x),h,x+h);
                        x = x + h;
                        h = -f(x)/df(x);
        }
        printf("\nRoot is %lf", x);
}

void main()
{

    int choice;
    printf("1. Bisection\n2. Newton Rhapson\n3. Exit\n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    while(1)
    {
        switch(choice)
        {
        case 1: bisection();
                break;
        case 2: newton_rhapson();
                break;
        case 3: printf("Goodbye");
                exit(0);
        default: printf("\nInvalid input");
        }
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
    }
}

