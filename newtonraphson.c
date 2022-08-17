#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x+4*x-9
#define g(x) 2*x+4
int main()
{
	float x0,x1,e,g0,g1,f0,f1;
	int i=1,n;
	printf("Enter the initial guess: ");
	scanf("%f",&x0);
	printf("Enter the maximum number of iteration: ");
	scanf("%d",&n);
	printf("Enter precision: ");
	scanf("%f",&e);
	do
	{
		f0=f(x0);
		g0=g(x0);
		//printf("%f %f\n",f0,g0);
		printf("Iteration %d ",i);
		x1 = x0 - f0/g0;
		x0 = x1;
		i++;
		f1=f(x1);
		printf(" %f \n",x1);
	}while(fabs(x1-x0)/x1>=e);
	
	return 0;
	
}

