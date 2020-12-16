int ListLength(LinkList L)
{
	Node *p;
	p=L->next;
	j=0;
	while(p!=NULL)
	{
		p=p->next;
		j++;
	}
	return j;
}





































int ListLength(LinkList L)
//求带头结点的单链表L的长度
{
	Node *p;//指针p指向当前扫描，初值指向头结点
	p=L->next;//从表中的第一个结点开始，从头开始数，用指针p依次指向各个结点
	j=0;//计数器，用来存放单链表的长度
	while(p!=NULL)
	{
		p=p->next;
		j++;
	}
	return j;//j为求得的单链表长度
}//ListLength