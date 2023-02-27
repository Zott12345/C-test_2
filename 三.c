double fact( int n )
{
	int z;
	if(n<=0)
	{
		z=1;
	}
	else
	{
		z=n*fact(n-1);
	}
	return z;
}
double factsum( int n )
{
	int i,j,x=1;
	int sum=0;
	if(n<=0)
	{
		return sum;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				x=x*j;
				
			}
			sum=sum+x;
			x=1;
		}
	}
	return sum;
}