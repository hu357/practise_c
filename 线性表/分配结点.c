int getnode(StaticList space,int *av)
{
	int i;
	i=*av;
	*av=space[*av].cursor;
	return i;
}










































int getnode(StaticList space,int *av)
//从备用链表摘下一个结点空间，分配给待插入静态链表中的元素
{
	int i;
	i=*av;
	*av=space[*av].cursor;
	return i;
}
//对系统而言，在空间结点链表中分配结点空间相当于空闲结点链表中减少(删除)一个结点，对使用者而言，相当于申请得到了一个可用的新结点