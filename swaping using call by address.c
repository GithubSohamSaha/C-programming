#include<stdio.h>

//creating a user difined fuction for the swaping
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a,b;
    printf("------swaping between two numbers------");
    printf("\n\nEnter the first number(a): ");
    scanf("%d",&a);
    printf("\nEnter the second number(b): ");
    scanf("%d",&b);
    printf("\n\nEntered number:-\na=%d & b=%d",a,b);
    swap(&a,&b);
    printf("\n\nnumber after swaping:- \na=%d & b=%d",a,b);
    return 0;
}

