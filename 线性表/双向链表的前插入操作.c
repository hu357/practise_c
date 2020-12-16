int DlinkIns(DoubleList L,int i,ElemType e)
{
	DNode *s,*p;
	s=(DNode*)malloc(sizeof(DNode));
	if(s)
	{
		s->data=e;
		s->prior=p->prior;
		p->prior->next=s;
		s->next=p;
		p->prior=s;
		return TRUE;
	}
	else return FALSE;
}


































int DlinkIns(DoubleList L,int i,ElemType e)
{
	DNode *s,*p;
	//先检查待插入的位置i是否合法(实现方法同单链表的前驱操作)
	//若位置i合法，则找到第i个结点并让指针p指向它
	s=(DNode*)malloc(sizeof(DNode));//建立新结点s
	if(s)
	{
		s->data=e;//结点s的数据域值为e
		s->prior=p->prior;//插入结点s后，插入结点s的前驱结点等于原第i个结点的前驱结点
		p->prior->next=s;//原位置i的结点的前驱结点的后继结点是s结点
		s->next=p;新结点s的后继结点为p指针指向的结点
		p->prior=s;p指针指向的结点的前驱结点为结点s
		return TRUE;
	}
	else return FALSE;
}