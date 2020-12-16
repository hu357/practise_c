void CreateFromTail(LinkList L)
{
	Node *r,*s;
	int flag=1;
	r=L;
	while(flag)
	{
		c=getchar();
		if(c!='$')
		{
			s=(Node*)malloc(sizeof(Node));
			s->data=c;
			r->next=s;
			r=s;
		}
		else
		{
			flag=0;
			r->next=NULL;
		}
	}
}



























void CreateFromTail(LinkList L)
//L是带头结点的空链表头指针，通过键盘输入元素值，利用尾插法建立单链表L
{
	Node *r,*s;//r始终指向单链表的表尾(即尾指针)
	int flag=1;//设置一个标志，初值为1，当输入“$”时，flag为0，建表结束
	r=L;//r指针动态指向链表的当前表尾，以便于做尾插入，其初值指向头结点
	while(flag)//循环输入表中元素值，将建立新结点s插入尾部
	{
		c=getchar();
		if(c!='$')
		{
			s=(Node*)malloc(sizeof(Node));
			//Node表示结点
			//sizeof(Node)表示一个结点所占存储单元的个数
			//sizeof(int)表示一个整型变量所占存储单元的个数
			s->data=c;
			r->next=s;
			r=s;//r始终指向单链表的表尾
		}
		else
		{
			flag=0;//建表结束
			r->next=NULL;//将最后一个结点的next链域置为空，表示链表的结束
		}
	}//while
}//CreateFromTail