void sort( int a[], int n )
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for( j = i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{	
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				
			}
		}
	}
}