double fact( int n )
{
	int i;
	if(n == 1)
	return 1;
	else
	i=n*fact(n-1);
	return i;
}