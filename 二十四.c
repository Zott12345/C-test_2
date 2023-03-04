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