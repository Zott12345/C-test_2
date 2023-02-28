double mypow( double x, int n )
{
	int i;
	double z=1;
	for(i=0;i<n;i++)
	{
		z *= x;
	}
	return z;
}