int gcd( int x, int y )
{
	int i;
	while( y != 0)
	{
		i = x%y;
		x = y;
		y = i;
		
	}
	return x;
}