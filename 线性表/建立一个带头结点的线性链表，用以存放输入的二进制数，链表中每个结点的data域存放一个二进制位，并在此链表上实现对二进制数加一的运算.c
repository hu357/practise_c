void BinAdd(LinkList 1)
{
	Node *q,*r,*s;
	q=l->next;
	r=l;
	while(q!=NULL)
	{
		if(q->data==0)
			r=q;
		q=q->next;
	}
	if(r!=l)
		r->data=1;
	else
	{
		s=(Node*)malloc(sizeof(Node));
		s->data=1;
		s->next=L->next;
		L->next=s;
		r=s;
	}
	r=r->next;
	while(r!=NULL)
	{
		r->data=0;
		r=r->next;
	}
}



















































void BinAdd(LinkList l)//用带头结点的单链表L存储二进制数，实现加1运算
{
	Node *q,*r,*s;//s为指向新结点的指针，r指向头结点用于判断是否全为1
	q=l->next;
	r=l;
	while(q!=NULL)//查找最后一个值域位0的结点
	{
		if(q->data==0)
			r=q;
		q=q->next;
	}
	if(r!=l)
		r->data=1;//将最后一个值域为0的结点的值域赋为1
	else//未找到值域为0的结点
	{
		s=(Node*)malloc(sizeof(Node));//申请新结点存放最高位
		s->data=1;//值域为1
		s->next=L->next;
		L->next=s;//插入到头结点之后
		r=s;
	}
	r=r->next;
	while(r!=NULL)//将后面所有结点的值赋为0
	{
		r->data=0;
		r=r->next;
	}
}//BinAdd结束