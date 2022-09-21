#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) x*x*x - 2*x -5
int main()
{
	float x0,x1,f0,f1,error,x2,f2;
	int i=1,n;
	label:
	printf("Enter the two inital guess: ");
	scanf("%f %f",&x0,&x1);
	printf("Enter the tolerable error: ");
	scanf("%f",&error);
	printf("Enter the max no of iteration: ");
	scanf("%d",&n);
	do
	{
		f0=f(x0);
		f1=f(x1);
		x2=x1-(((x1-x0)*f1)/(f1-f0));
		//f2=f(x2);
		//printf(" %f ",f2);
		printf("Iteration-%d\t\tRoot %f\n ",i,x2);
		x0=x1;
		f0=f1;
		x1=x2;
		f1=f2;
		i++;
		if(i>n)
		{
			printf("No solution;");
		}
	}while(fabs(f2)>error);
	printf("The required root is: %f",x2);
	return 0;
}
