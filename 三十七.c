#include <stdio.h>
#include <math.h>

double funcos( double e, double x );
int Factorial( const int N )
{
	if( N == 1|| N == 0)
	{
		return 1;
	}
	else if(N < 0)
	{
		return 0;
	}
	else
	{
		int z;
		z = N*Factorial(N-1);
		return z;
	}
}
double funcos( double e, double x )
{
	double i = 2;
	double j = 1;
	double z = 1;
	while((pow(x,i)/Factorial(i)) > e)
	{
		z += pow(-1,j)*(pow(x,i)/Factorial(i));
		i += 2;
		j++;
	}
	z += pow(-1,j)*(pow(x,i)/Factorial(i));
	return z;
}