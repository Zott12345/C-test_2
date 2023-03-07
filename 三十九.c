int factorsum( int number )
{
	int sum = 0;
	for(int i = 1;i < number;i++)
	{
		if((number % i) == 0)
		{
			sum += i;
		}
	}
	return sum;
}
void PrintPN( int m, int n )
{
	int x = 1;
	int z,count = 0;
	int a[10000] = {0};
	for(int i = m;i <= n;i++)
	{
		if(i == factorsum(i))
		{
			x =0;
			printf("%d = ",i);
			for(int j = 1;j < i;j++)
			{
				if((i % j) == 0)
				{
					a[count] = j;
					count++;
				}
			}
			for(int l = 0;l<count-1;l++)
			{
				printf("%d + ",a[l]);
			}
			printf("%d",a[count-1]);
			printf("\n");
			count = 0;
		}
	}
	if(x)
	{
		printf("No perfect number");
	}
}