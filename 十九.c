int Sum ( int List[], int N )
{
	int i = 0,sum = 0;
	for(i = 0;i < N;i++)
	{
		sum += List[i];
	}
	return sum;
}