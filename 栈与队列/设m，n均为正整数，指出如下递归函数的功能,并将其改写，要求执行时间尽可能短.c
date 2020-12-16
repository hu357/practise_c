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
	
}




































int fun(int m,int n)
{
	int r;
	if(n>m) return(fun(n,m));//换位
		else if(n==0) return(m);
			else
			{
				r=m%n;//取余
				return(fun(n,r));
			}
}
//该算法要求第一个参数大于第二个参数，否则将换位。当m大于n时，首先求出m除以n的余数r，然后让n做第一个参数，让r做第二个参数，重复上述程序
//这是辗转相除法的过程，该函数的功能是求m和n的最大公约数