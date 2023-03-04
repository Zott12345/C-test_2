ElementType Average( ElementType S[], int N )
{
	ElementType  sum,z;
	int i;
	for(i = 0;i<N;i++)
	{
		sum += S[i];
	}
	z = sum/N;
	return z;
}