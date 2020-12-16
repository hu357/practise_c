void delx(SeqList * L,ElemType x)
{
	i=0;j=0;
	while(i<=L->last)
		if(L->elem[i]!=x)
		{
			L->elem[j]=L->elem[i];
			i++;j++;
		}
		else
			i++;
	L->last=j-1;
}




































void delx(SeqList * L,ElemType x)
{
	i=0;j=0;//初始化指针指向下标为1的元素
	while(i<=L->last)
		if(L->elem[i]!=x)//i指向的元素不为x时，j指向的元素为i指向元素的值，并将ij指针同时后移一位
		{
			L->elem[j]=L->elem[i];
			i++;j++;
		}
		else//若i指向的元素为x，则将i指针后移一位，j指针不变
			i++;
	L->last=j-1;
}