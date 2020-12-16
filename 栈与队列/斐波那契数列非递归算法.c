int Fib(int n)
{
	int x,y,z;
	if(n==0||n==1) return n;
	else
	{
		x=0,y=1;
		for(i=2,i<=n,i++)
		{
			z=y;
			y=x+y;
			x=z;
		}
		return y;
	}
}

































int Fib(int n)
{
	int x,y,z;
	if(n==0||n==1) return n;//计算Fib(0)或Fib(1)
	else
	{
		x=0,y=1;//x=Fib(0),y=Fib(1)
		for(i=2,i<=n,i++)
		{
			z=y;//z=Fib(i-1)
			y=x+y;//y=Fib(i-1)+Fib(i-2),求Fib(i)
			x=z;//x=Fib(i-1)
		}
		return y;
	}
}
//Fib(n)=0,n=0
//Fib(n)=1,n=1
//Fib(n)=Fib(n-1)+Fib(n-2),n>1