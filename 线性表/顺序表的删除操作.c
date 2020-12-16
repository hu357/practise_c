int DelList(SeqList *L,int i ,ElemType *e)
{
	int k;
	if((i<1)||(i>L->last+1))
	{
		printf("删除位置不合法！");
		return(ERROR);
	}
	*e=L->elem[i-1];
	for(k=i;i<=L->last;k++)
		L->elem[k-1]=l->elem[k];
	L->last--;
	return(OK);
}



































int DelList(SeqList *L,int i ,ElemType *e)
//在顺序表L中删除第i个数据元素，并用指针参数e返回其值，i的合法取值为1<=i<=L.last+1
{
	int k;
	//last为最后一个元素的位置，下标为i-1,表长度为(i-1)+1=last+1
	if((i<1)||(i>L->last+1))
	//判断插入本身是否存在问题（如果删除元素位置比整张表的长度还大（如果相等，是删除最后元素的情况），
    //或者删除的位置本身不存在，程序作为提示并自动退出）
	{
		printf("删除位置不合法！");
		return(ERROR);
	}
	*e=L->elem[i-1];//将删除的元素存放到e所指向的变量中
	for(k=i;i<=L->last;k++)//为删除元素移动位置
		L->elem[k-1]=L->elem[k];//将后面的元素依次前移
	L->last--;
	return(OK);
}