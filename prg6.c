#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,m=1;
	printf("Enter the the number:");
	scanf("%d",&n);
	printf("\nthe number upto %d is \n:",n);
	for(i=0;i<=n;i++)
	{
		printf("%d \t",m);
		m=m+2;
	}
return 0; 
}
