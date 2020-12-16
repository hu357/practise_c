Fib(int n)
{
	if(n==0||n==1) return n;
	else return Fib(n-1)+Fib(n-2);
}












































Fib(int n)
{
	if(n==0||n==1) return n;//递归出口
	else return Fib(n-1)+Fib(n-2);//调用递归
}
//Fib(n)=0,n=0
//Fib(n)=1,n=1
//Fib(n)=Fib(n-1)+Fib(n-2),n>1