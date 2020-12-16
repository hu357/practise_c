void freenode(StaticList space,int *av,int k)
{
	space[k].cursor=*av;
	*av=k;
}












































void freenode(StaticList space,int *av,int k)
//从space备用链表中回收序号为k的结点，av为备用链表的头指针
{
	space[k].cursor=*av;
	*av=k;
}
//对系统而言，空闲结点链表回收空闲结点相当于空闲结点链表中增加一个结点，对使用者而言，相当于释放了一个不用的结点