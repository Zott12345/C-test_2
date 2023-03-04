int Count_Digit ( const int N, const int D )
{
	int n = N < 0 ? -N : N;
	int cnt = (N == 0&& D == 0) ? 1 : 0;
	while(n != 0)
	{
		int a = n%10;
		if(a == D)
		{
			cnt++;
		}
		n /= 10;
	}
	return cnt;
}