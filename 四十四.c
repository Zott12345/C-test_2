void f( char *p )
{
	int i,t,h=0;
	for(i=0;p[i]!='\0';i++)
    {
    	h=i;
	}
	for(i=0;i<h;i++)
    {
		t=p[i];
    	p[i]=p[h];
    	p[h]=t;
    	h--;
	}
}