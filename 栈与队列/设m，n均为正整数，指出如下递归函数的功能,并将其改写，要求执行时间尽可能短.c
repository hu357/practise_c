int fun(int m,int n)
{
	int r;
	if(n>m) return(fun(n,m));
		else if(n==0) return(m);
			else
			{
				r=m%n;
				return(fun(n,r));
			}
}

int fun(int m,int n)
{
	int r;
	do
	{
		r=m%n;
		m=n;
		n=r;
	}while(r!=0);
	return(m);
}




































int fun(int m,int n)
{
	int r;
	if(n>m) return(fun(n,m));//换位，将m赋值给n
		else if(n==0) return(m);
			else
			{
				r=m%n;//取余
				return(fun(n,r));//将r赋值给n
			}
}
//该算法要求第一个参数大于第二个参数，否则将换位。当m大于n时，首先求出m除以n的余数r，然后让n做第一个参数，让r做第二个参数，重复上述程序
//这是辗转相除法的过程，该函数的功能是求m和n的最大公约数
int fun(int m,int n)
{
	int r;
	do
	{
		r=m%n;//取余
		m=n;
		n=r;
	}while(r!=0);//当r不为0时，循环do中语句
	return(m);
}
//要改写上述最大公约数的递归函数，使执行时间尽可能短，关键要将递归变为非递归形式，对求最大公约数的辗转相除法可以转化成迭代的直线型循环实现