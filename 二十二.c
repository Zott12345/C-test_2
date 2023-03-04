int FactorialSum( List L )
{
	int s = 0;
	for(PtrToNode p = L;p;p = p-> Next)
	{
		int s1 = 1;
		for(int i = 0;i < p->Data;i++)
		{
			s1 *= i+1;
		}
		s += s1;
	}
	return s;
}