double fn( double x, int n )
{
	double z = 0;
	if(n==1)
	{
		z = x;
	}
	else
	{
		z = x-x*fn(x,n-1);
	}
	return z;
}