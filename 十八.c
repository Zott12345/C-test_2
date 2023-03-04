double f( int n, double a[], double x )
{
	double sum;
	for( int i=0;i<=n;i++)
	{
		sum = sum+a[i]*pow(x,i);
	}
	return sum;
}