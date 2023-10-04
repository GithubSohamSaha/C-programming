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
		if(i%2==0)
			printf("-%d\t",i);
		else
			printf("%d\t",i);
	}
return 0; 
}
