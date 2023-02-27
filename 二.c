int search( int n )
{
	int i,j=0;
	for(i=101;i<=n;i++)
	{
		if((int)sqrt(i)*(int)sqrt(i)==i)
		{
			if((i/100)==(i%10)||((i/10)%10)==(i/100)||((i/10)%10)==(i%10))
			{
				j++;
			}
		}
	}
	return j;
}