#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	printf("Enter the the number:");
	scanf("%d",&n);
	printf("\nthe number upto %d is \n:",n);
	for(i=0;i<=n;i++)
	{
		printf("%d \t",(int)pow(2,i));
	}
return 0; 
}
