LinkList merge_1(LinkList LA,LinkList LB)
{
	Node *p,*q;
	p=LA;
	q=LB;
	while(p->next!=LA)
		p=p->next;
	while(q->next!=LB)
		q=q->next;
	q->next=LA;
	p->next=LB->next;
	free(LB);
	return(LA);
}



































LinkList merge_1(LinkList LA,LinkList LB)
//此算法将两个采用头指针的循环单链表的首尾连接起来
{
	Node *p,*q;//分别直线LA，LB的指针p，q
	p=LA;
	q=LB;
	while(p->next!=LA)
		p=p->next;//找到表LA的表尾，用p指向它
	while(q->next!=LB)
		q=q->next;//找到表LB的表尾，用q指向它
	q->next=LA;//修改LB表的尾指针 ，使其指向LA表的头结点
	p->next=LB->next;//修改LA表的尾指针，使其指向LB表中的第一个结点
	//LB->next为LB表的第一个结点
	free(LB);//释放LB表所占用的内存空间
	return(LA);
}