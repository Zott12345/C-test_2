#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

int reverse( int number )
{
	int z,a;
	if(number%10 == 0)
	{
		number = number/10;
	}
	if(number < 0)
	{
		printf("-");
		a = -number;
	}
	else
	{
		a = number;
	}
	while(a != 0)
	{
		z = a%10;
		a /= 10;
		printf("%d",z);
	}
}