int sum( int n )
{
	int z;
	if(n<0)
	{
		z=0;
	}
	else if(n==1)
	{
		z=1;
	}
	else
	{
		z=n+sum(n-1);
	}
	return z;
}
	