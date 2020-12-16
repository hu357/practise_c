Node * Locate(LinkList L,ElemType key)
{
	Node *p;
	p=L->next;
	while(p!=NULL)
		if(p->data!=key)
			p=p->next;
		else break;
	return p;
}







































Node * Locate(LinkList L,ElemType key)
//在带头结点的单链表L中查找其结点值等于key的第一个结点，若找到则返回该结点的位置p，否则返回NULL
{
	Node *p;//指针p指向当前扫描，初值指向头结点
	p=L->next;//从表中的第一个结点开始
	while(p!=NULL)//当前表未查询完
		if(p->data!=key)//并且结点p的值不为key
			p=p->next;//查找下一元素
		else break;//找到结点值=key时退出循环
	return p;
}//Locate