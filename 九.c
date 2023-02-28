int is( int number )
{
	int t= 0;
	int sum=0;
	while(number != 0)
	{
		t=number%10;
		sum += t;
		number = number/10;
	}
	if( sum==5 )
	{
		return 1;	
	}

	return 0;	
}
void count_sum( int a,int b )
{
	int i;
	int count=0,sum=0;
	for(i=a;i<=b;i++)
	{
		if(is(i) != 0)
		{
			count++;
			sum += i;
		}
	}
	printf("count = %d, sum = %d",count,sum);
}

