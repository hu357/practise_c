long Fact(int n)
{
	if(n==1) return 1;
	return n*Fact(n-1);
}

int f(int n)
{
	if(n==0) return(1);
	else return(n*f(n-1));
}
//n!=1,n=0(0为最小规模)
//n!=n(n-1)!,n>0(n-1比n的规模更小)









































long Fact(int n)
{
	if(n==1) return 1;
	return n*Fact(n-1);
}
//当递归调用返回时，返回到上一层递归调用的下一语句，而这个返回位置恰好正是算法的末尾
//也就是说，以前每次递归调用时保存的返回地址，函数返回值和函数参数等实际上在这里根本没有用到
//因此，对于尾递归形式的递归算法，不必利用系统的运行时栈保存各种信息
//尾递归形式的算法实际上可变成循环结构的算法