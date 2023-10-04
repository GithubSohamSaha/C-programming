#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the the number:");
	scanf("%d",&n);
	printf("\nthe number upto %d is \n:",n);
	for(i=0;i<=n;i++)
	{
		printf("%d \t",i);
	}
return 0;
}
