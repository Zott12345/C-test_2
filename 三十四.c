int prime( int p )
{
	int a = 1;
	if(p > 1)
	{
		for(int i = 2;i < p;i++)
		{
		if(p%i == 0)
			{
				a = 0;	
				break;		
			}
		}
	}
	else
	{
		a = 0;
	}
	return a;
	

}
int PrimeSum( int m, int n )
{
	int sum = 0;
	for(int i = m;i <= n;i++)
	{
		if(prime(i) == 1)
		{
			sum += i;
		}
	}
	return sum;
}