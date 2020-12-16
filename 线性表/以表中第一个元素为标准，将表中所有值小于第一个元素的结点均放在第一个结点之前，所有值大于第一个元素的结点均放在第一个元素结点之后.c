void changelist(LinkList L)
{
	if(L->next==NULL) return ERROR;
	p1=L->next;
	pre=p1;
	p=p1->next;
	while(p)
	{
		q=p->next;
		if(p->data>=p1->data)
			{pre=p,p=q}
		else
			{pre->next=p->next;p->next=L->next;L->next=p;p=q;}
	}
}


































void changelist(LinkList L)
{
	if(L->next==NULL) return ERROR;
	p1=L->next;//p1指向表中的第一元素
	pre=p1;//前驱结点pre为结点p1
	p=p1->next;//顺次从p开始取结点，比pi->data小的插在头结点之后，比pi->data大的结点不做处理，继续检测其后继结点
	while(p)
	{
		q=p->next;
		if(p->data>=p1->data)//不做处理
			{pre=p,p=q}
		else//否则将结点插入到头结点之后
			{pre->next=p->next;p->next=L->next;L->next=p;p=q;}
	}
}