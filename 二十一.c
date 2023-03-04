ElementType Max( ElementType S[], int N )
{
	int max = 0;
	int i;
	for(i = 0;i<N;i++)
	{
		if(S[i] > S[max])
		{
			max = i;
		}
	}
	
	return S[max];
}