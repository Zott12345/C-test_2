int CountDigit( int number, int digit )
{
	int arr[10] = {0};
	number = number>0?number:-number;
	if(number == 0&&digit == 0)
	{
		return 1;
	}
	else
	{
		while(number != 0)
		{
			arr[number%10]++;
			number /= 10;
		}
	}
	
	return arr[digit];
}