void initial(StackList space,int *av)
{
	int k;
	space[0].cursor=-1;
	for(k=1;k<Maxsize-1;k++)
		space[k].cursor=k+1;
	space[Maxsize-1].cursor=-1;
	*av=1;
}








































void initial(StackList space,int *av)
{
	int k;
	space[0].cursor=-1;
	//设置已用静态单链表的头指针指向space空间位置0，space[0]相当于头结点
	for(k=1;k<Maxsize-1;k++)
		space[k].cursor=k+1;//连链
	space[Maxsize-1].cursor=-1;//标记链尾
	*av=1;//设置备用链表头指针初值
}//initial
//已用空间头指针此时可视为单链表的头结点，备用空间头指针av指向空间结点讲台链表中的第一个结点