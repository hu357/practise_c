LinkList merge_2(LinkList RA,LinkList RB)
{
	Node *p;
	p=RA->next;
	RA->next=RB->next->next;
	free(RB->next);
	RB->next=p;
	return RB:
}








































LinkList merge_2(LinkList RA,LinkList RB)
//此算法将两个采用尾指针的循环链表首尾连接起来
{
	Node *p;
	p=RA->next;//保存链表RA的头结点地址
	RA->next=RB->next->next;//链表RB的开始结点链到链表RA的终端结点之后
	free(RB->next);//释放链表RB的头结点所占用的存储空间
	RB->next=p;//链表RA的头结点链到链表RB的终端结点之后
	return RB://返回新循环链表的尾指针
}