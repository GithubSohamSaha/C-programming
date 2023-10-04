#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,m=0;
	printf("Enter the the number:");
	scanf("%d",&n);
	printf("\nthe number upto %d is \n:",n);
	for(i=0;i<=n;i++)
	{
		m=m+2;
		printf("%d \t",m);
	}
return 0; 
}
