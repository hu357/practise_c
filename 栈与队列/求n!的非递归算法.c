long Fact(int n)
{
	int fac=1;
	for(int i=1;i<=n;i++)
		fac=fac*i;
	return fac;
}










































long Fact(int n)
{
	int fac=1;
	for(int i=1;i<=n;i++)//依次计算f(1),...,f(n)
		fac=fac*i;//f(i)=f(i-1)*i
	return fac;
}