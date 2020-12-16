int DlinkDel(DoubleList L,int i,ElemType *e)
{
	DNode *p;
	*e=p->data;
	p->prior->next=p->next;
	p->next->prior=p->prior;
	free(p)
	return TRUE;
}








































int DlinkDel(DoubleList L,int i,ElemType *e)
{
	DNode *p;
	//先检查待插入的位置i是否合法(实现方法同单链表的删除操作)
	//若位置i合法，则找到第i个结点并让指针p指向它
	*e=p->data;
	p->prior->next=p->next;
	p->next->prior=p->prior;
	free(p)//释放被删除的结点p所占用的内存空间
	return TRUE;
}