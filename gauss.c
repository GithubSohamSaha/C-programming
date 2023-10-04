#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//user defined function for gauss seidal method.
void g_seidal()
{
    int i,j,sum,n,flag,a[10][10];
	/* testing of diagonal dominance may be included here from 
	   the program of Gauss-Jacobi's method */
	do{
		for(i=0;i<n;i++)
		{
			sum=b[i];
			for(j=0;j<n;j++)
			{
				if(j<i)
					sum-=a[i][j]*xn[j];
				else if(j>i)
					sum-=a[i][j]*x[j];
				xn[i]=sum/a[i][j];
			}
		}
		flag=0; // indicates |x[i]-xn[i]|<epp for all i
		for(i=0;i<n;i++)
			if(fabs(x[i]-xn[i])>epp)
				flag=1;
		if(flag==1)
			for(i=0;i<n;i++)
				x[i]=xn[i]; // reset x[i]			
	}while(flag==1);
	printf("Solution is \n");
	for(i=0;i<n;i++)
		printf("%8.5f ",xn[i]);
}