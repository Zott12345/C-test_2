int prime( int p )
{
   int ret=1;
     if(p>1)
   {           
        for(int i=2;i<p;i++)
       {
           if(p%i==0)
           {
               ret=0;
               break;
           }
        }
     }else
     {
       ret=0;  
     }
    return ret;
}
void Goldbach( int n )
{
    int i=2;
    for(;i<n;i++)
    {
        if( prime(i))
        {
 
            if(prime(n-i))
            {
                printf("%d=%d+%d",n,i,n-i);
                break;
            }            
        }
    }
}
