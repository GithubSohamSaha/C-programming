#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j=1;
	printf("Enter the the number:");
	scanf("%d",&n);
	printf("\nthe number upto %d is \n:",n);
	for(i=0;i<=n;i++)
	{
		j=j+i;
		printf("%d\t",j);
	}
return 0; 
}
