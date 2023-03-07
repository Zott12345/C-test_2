int fib( int n )
{
	int z;
	if( n <= 2)
	{
		z = 1;
	}
	else
	{
		z = fib(n - 1) + fib(n - 2);
	}
	return z;
}
void PrintFN( int m, int n )
{
	int x =1;
	int a = 1;
	int count = 0;
	int b = 0;
	while(fib(a) < m)
	{
		a++;
	}
	int c = a;
	while(fib(a) <= n)
	{
		count++;
		a++;
	}
	while(fib(c) <= n)
	{
		x = 0;
		if(count == 1)
		{
			printf("%d",fib(c));
		}
		else
		{
			b++;
			if( b == count)
			{
				printf("%d",fib(c));
			}
			else
			{
				printf("%d ",fib(c));
			}
			c++;
		}
	}
	if( x )
	{
		printf("No Fibonacci number");
	}
}