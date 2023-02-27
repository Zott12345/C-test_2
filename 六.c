int Ack( int m, int n )
{
	int z;
	if(m == 0)
	{
		z = n+1;
	}
	if(n==0&&m>0)
	{
		z = Ack (m-1,1);
	}
	if(m>0&&n>0)
	{
		z = Ack (m-1,Ack (m,n-1));
	}
	return z;
}