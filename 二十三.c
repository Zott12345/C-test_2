int IsTheNumber ( const int N )
{
	int n = N;
	int i = 0;
	int p[10] = {0};
	if((int)sqrt(N)*sqrt(N) == N)
	{
		while(n != 0)
		{
			int a = n%10;
			p[n%10] ++;
			n /= 10;
		}
		for(i; i < 10; i++)
		{
			if(p[i] > 1)
			{
				return 1;
			}
		}
	}
	return 0;
}
