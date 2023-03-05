double funcos(double e, double x)
{
	int temp = -1;//字节小的变量放在前面，减少时间
	double item = 1, m = 2, sum = 1;
	double fenmu = 1, fenzi=1;
	while (item > e)
	{
		for (int i = 1;i <= m;i++){
			fenmu =fenmu* i;
		}
		fenzi = pow(x, m);//也可以使用循环来实现
		item = fenzi / fenmu;
		sum = sum + temp * item;
		m = m + 2;
		fenmu = 1;
		temp = -temp;
	} 
	return sum;
}
