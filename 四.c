double calc_pow( double x, int n )
{
	double z;
	if(n==1)
	{
		z=x;
	}
	else
	{
			z = x*calc_pow(x,(n-1));
	}

	return z;
}