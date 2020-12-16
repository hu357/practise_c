Polylist PolyCreate()
{
	Polynode *head,*rear,*s;
	int c,e;
	head=(Polynode*)malloc(sizeof(Polynode));
	rear=head;
	scanf("%d,%d",&c,&e);
	while(e!=0)
	{
		s=(Polynode*)malloc(sizeof(Polynode));
		s->coef=c;
		s->exp=e;
		rear->next=s;
		rear=s;
		scanf("%d,%d",&c,&e);
	}
	rear->next=NULL;
	return(head);
}






























Polylist PolyCreate()
{
	Polynode *head,*rear,*s;
	int c,e;
	//为head申请一个头结点
	head=(Polynode*)malloc(sizeof(Polynode));//建立多项式的头结点
	rear=head;//rear指针始终指向单链表的表尾，便于尾插法建表
	scanf("%d,%d",&c,&e);//输入多项式的系数和指数项
	while(e!=0)//若输入多项式的系数为0，则代表多项式的输入结束
	{
		s=(Polynode*)malloc(sizeof(Polynode));//申请新的结点s
		s->coef=c;//系数
		s->exp=e;//指数
		rear->next=s;//在当前表尾做插入
		rear=s;
		scanf("%d,%d",&c,&e);
	}
	rear->next=NULL;//将表的最后一个结点的next置NULL，以示表结束
	return(head);
}