int IsSquare( int n )
{
	if(sqrt(n)*(int)sqrt(n) == n)
	{
		return 1;
	}
	else 
		return 0;
}