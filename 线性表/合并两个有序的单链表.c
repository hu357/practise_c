LinkList MergeLinkList(LinkList LA,LinkList LB)
{
	Node *pa,*pb;
	LinkList LC;
	pa=LA->next;
	pb=LB->next;
	LC=LA;
	LC->next==NULL;r=LC;
	while(pa!=NULL&&pb!=NULL)
	{
		if(pa->data=pb->data)
			{r->next=pa;r=pa;pa=pa->next;}
		else
			{r->next=pb;r=pb;pb=pb->next;}
	}
	if(pa)
		r->next=pa;
	else
		r->next=pb;
	free(LB);
	return(LC);
}



























LinkList MergeLinkList(LinkList LA,LinkList LB)
//将递增有序的单链表LA和LB合并成一个递增序列的单链表LC
{
	Node *pa,*pb;
	LinkList LC;//将LC初始置为空表，pa和ob分别指向两个单链表中LA和LB中的第一个结点，r初值为LC且r始终指向LC的表尾
	pa=LA->next;
	pb=LB->next;
	LC=LA;
	LC->next==NULL;r=LC;//，将表LC初始置为空r指向LC的表尾
	while(pa!=NULL&&pb!=NULL)//当两个表中均未处理完时，比较选择将较小值结点插入到新表LC中
	{
		if(pa->data<=pb->data)
			{r->next=pa;r=pa;pa=pa->next;}
		else
			{r->next=pb;r=pb;pb=pb->next;}
	}
	if(pa)//若表LA未完，将表LA中后序元素链到新表LC表尾
		r->next=pa;
	else//若表LA已完，则将表LB中后续元素链到新表LC表尾
		r->next=pb;
	free(LB);//释放LB所占用的内存空间
	return(LC);//返回新链表LC
}//MergeLinkList