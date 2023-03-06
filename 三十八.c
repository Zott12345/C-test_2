int fn( int a, int n )
{
    int result=0;
    //int result=a;
    
    //while(n-1)
    while(n)
    {  
        result=result*10+a;
        n--; 
    }
    return result;
}
 
int SumA( int a, int n )
{
    //直接照搬上面fn的框架:
    //int member=0,result=0;
    /*
    while(n)
    {  
        member=member*10+a;
        result+=member;
        n--; 
    }
    */
    int result=0;
    
    while(n)
    {
        result+=fn(a,n); n--;
    }
    return result;
}
