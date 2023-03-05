#include<math.h>


int narcissistic( int number )
{
	int sum = 0;
	int x = number;
	int count = 0;
	while(x != 0)
	{
		count++;
		x /= 10;
	}
	x = number;
	while(x != 0)
	{
		int y = x % 10;
		x /= 10;
		sum += pow(y,count);
	}
	if(number == sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void PrintN( int m, int n )
{
	for(int i = m+1;i < n;i++)
	{
		if(narcissistic(i))
		{
			printf("%d\n",i);
		}
	}
	
}