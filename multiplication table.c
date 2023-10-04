#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	int num,i;
	printf("\nEnter the number:\n");
	scanf("%d",&num);
	printf("\n\n-----Presenting the table of %d-----\n\n",num);
	for(i=1;i<=10;i++)
	{
		printf("%d\tx\t%d\t=>\t%d",num,i,num*i);
		printf("\n-----------------------------------\n");
	}
	printf("\n\n-_-_-_-Thank you for using-_-_-_-\n\n");
	return(0);
}
