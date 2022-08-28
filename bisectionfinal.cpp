#include<iostream>
#include<iomanip>
#include<math.h>
#define f(x) exp(x)-3*x

using namespace std;

int main()
{
	
	 float g0, g1, x, f0, f1, f, e;
	 int i = 1;

	
     cout<< setprecision(5)<< fixed;

	
	 up:
	 cout<<"Enter first and second guess: ";
     cin>>g0>>g1;
	cout<<"Enter tolerable error: ";
     cin>>e;
	f0 = f(g0);
	 f1 = f(g1);


	 if( f0 * f1 > 0.0)
	 {
		  cout<<"Incorrect Initial Guesses."<< endl;
		  goto up;
	 }
   
     
	 cout<<"\n\tBisection Method"<< endl;
	
	 do 
	 {
		  
		  x = (g0 + g1)/2;
		  f = f(x);

		  cout<<"Iteration-"<< i<<":\t x = "<< setw(10)<< x<<"    f(x) = "<< setw(10)<< f(x)<< endl;

		  if( f0 * f < 0)
		  {
			   g1 = x;
		  }
		  else
		  {
			   g0 = x;
		  }
		  i ++;
	 }while(fabs(f)>e);

	 cout<< endl<< "\n\tThe required root is: "<<  x<< endl;

	 return 0;
}
