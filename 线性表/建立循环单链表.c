void CreateCLinkList(LinkList CL)
{
	Node *rear,*s;
	char c;
	rear=CL;
	c=getchar();
	while(c!='$')
	{
		s=(Node*)malloc(sizeof(Node))
		s->data=c;
		rear->next=s;
		rear=s;
		c=getchar();
	}
	rear->next=CL;
}

































void CreateCLinkList(LinkList CL)
//CL是已经初始化好的，带头结点的空循环链表的头指针，通过键盘输入元素值，利用尾插法建立循环单链表CL
{
	Node *rear,*s;//*rear为尾指针
	char c;//定义读入c为字符类型
	rear=CL;//rear指针动态指向链表的当前表尾，其初值指向头结点
	c=getchar();//读入第一个元素
	while(c!='$')//只要读入的字符不是结束标志，就存入新结点s并链到表尾，直到读入结束标志
	{
		s=(Node*)malloc(sizeof(Node))//建立新结点
		s->data=c;//s data域的值为c
		rear->next=s;//将结点s插入表尾
		rear=s;
		c=getchar();
	}
	rear->next=CL;//让最后一个结点的next链域指向头结点
}
