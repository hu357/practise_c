void CreateFromHead(LinkList L)
{
	Node *s;
	char c;
	int flag=1;
	while(flag)
	{
		c=getchar();
		if(c!='$')
		{
			s=(Node*)malloc(sizeof(Node));
			s->data=c;
			s->next=L->next;
			L->next=s;
		}
		else flag=0;
	}
}































void CreateFromHead(LinkList L)
//L是带头结点的空链表头指针，通过键盘输入表中元素，利用头插法建单链表L
{
	Node *s;
	char c;//设元素类型为字符型
	int flag=1;//flag初值为1，当输入“$”时，置flag为0，建表结束
	while(flag)
	{
		c=getchar();
		if(c!='$')
		{
			s=(Node*)malloc(sizeof(Node));//创建新结点
			s->data=c;//申请新结点并赋值
			s->next=L->next;//将头指针所指向的下一个结点的地址，赋给新创建结点的next
			L->next=s;//将新创建的结点的地址赋给头指针的下一个结点
		}
		else flag=0;//建表结束
	}
}
//假设线性表中结点的数据类型是字符，逐个输入这些字符，并以“$”作为输入结束标志符
//从一个空表开始，每次读入数据，生成新结点，将读入数据存放到新结点的数据域中，然后将新结点插入到当前链表的表头结点之前，直至读入结束标志为止