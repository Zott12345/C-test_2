void pyramid( int n )
{
	for(int i = 1;i<=n;i++)
	{
		for(int j = n-i;j>0;j--)
		{
			printf(" ");
		}
		for(int j = i;j > 0;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
