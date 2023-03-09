double P( int n, double x )
{
	double z = 0;
	if(n == 0)
	{
		z = 1;
	}
	else if(n == 1)
	{
		z = x;
	}
	else if(n > 1)
	{
		z = 1.0*((2*n-1)*P(n-1,x)-(n-1)*P(n-2,x))/n;
	}
	return z;
}