struct ListNode* ReverseList(struct ListNode *Head){
	struct ListNode *pre=NULL;
	struct ListNode *cur=Head;
	struct ListNode *nex=NULL;
	while(cur)
	{
		nex=cur->next;
		cur->next=pre;
		pre = cur;
		cur = nex;
	}
	return pre;
}


void ReverseList(LinkList L)
{
	p=L->next;
	L->next=NULL;
	while(p!=NULL)
	{
		q=p->next;
		p->next=L->next;
		L->next=p;
		p=q;
	}
}






















void ReverseList(LinkList L)//逆置带头结点的单链表L
{
	p=L->next;//p为原链表的当前处理点
	L->next=NULL;//逆置单链表初始为空表
	while(p!=NULL)//当原链表未处理完
	{
		q=p->next;//q指针保留原链表当前处理结点的下一个结点
		p->next=L->next;//将当前处理结点p插入到逆置表L的表头
		L->next=p;
		p=q;//p指向下一个待插入的结点
	}//end of while
}//end of ReverseList