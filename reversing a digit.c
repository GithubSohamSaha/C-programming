#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int num,rem,sum=0,count=0,i,j,n;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	//counting the number of digit in the number
	/*while(num>0)
	{
		num=num/10;
		count++;
	}*/
	n=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	printf("\n\nThe number before reversing =>\n%d",n);
	printf("\n\nThe number after reversing =>:\n%d",sum);
	
	return(0);
	getch();
}
