#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define f(x) 3*pow(x,3)-4*x*x+5*x-6
int main()
{
	

	int x0,c,b,j=0,i,k=2;
	printf("Enter the value of x0 " );
	scanf("%d",&x0);
	printf("enter the polynomial : ");
	scanf("%d",&b);
	int a[b],poly[b];
	printf("ENTER the values: \n");
	for(i=0;i<=b;i++)
	{
		scanf("%d",&poly[i]);
	}
	a[b]=poly[b];
	for(i=b-1;i>=0;i--)
	{
		a[i]=poly[i]+a[b-j]*x0;
		printf("a[%d]= %d\n",k,a[i]);
		j++;
		k--;
	}
	return 0;
}
