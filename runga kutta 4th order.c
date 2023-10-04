#include<stdio.h>

float function (float x, float y) 
{
	return x*y;
}

void main()
{
	float x0,x,y,k1,k2,k3, k4,h;	//The the initial values and the step difference from the user
	printf("\nEnter the value of x for which corresponding y value is to be computed: "); 
	scanf("%f",&x); 
	printf("\n Enter the initial value for x0:"); 
	scanf("%f",&x0); 
	printf("\n Enter the initial value for y:"); 
	scanf("%f",&y); 
	printf("\n Enter the step difference:"); 
	scanf("%f",&h);
	while(x0<x)						//Calculating the value of y for the corresponding given value of x
	{
		k1=h*function(x0,y);
		k2=h*function(x0+h/2,y+k1/2);
		k3=h*function(x0+h/2,y+k2/2); 
		k4=h*function(x0+h,y+k3);
		y+=(k1+2*k2+2*k3+k4)/6; 
		x0+=h;
	} 
	printf("\n%.5f is the result",y);//Displaying the results 
}
