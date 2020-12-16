int InsList(LinkList L,int i,ElemType e)
{
	Node *pre,*s;
	int k;
	if(i<=0) return ERROR;
	pre=L;k=0;
	while(pre!=NULL&&k<i-1)
	{
		pre=pre->next;
		k=k+1;
	}
	if(pre==NULL)
	{
		printf("插入位置不合理！");
		return ERROR;
	}
	s=(Node*)malloc(sizeof(Node))
	s->data=e;
	s->next=pre->next;
	pre->next=s;
	return OK;
}



























int InsList(LinkList L,int i,ElemType e)
//在带头结点的单链表L中第i个位置插入值为e的新结点
{
	Node *pre,*s;//pre为i位置结点的前驱结点
	int k;
	if(i<=0) return ERROR;
	pre=L;k=0;//从头开始，查找第i-1个结点
	while(pre!=NULL&&k<i-1)//表未查完且未查到第i-1个时重复，找到pre指向第i-1个
	{
		pre=pre->next;
		k=k+1;//查找第i-1个结点
	}
	if(pre==NULL)//如当前位置pre为空表示已找完，但还未数到第i个，说明插入位置不合理
	{
		printf("插入位置不合理！");
		return ERROR;
	}
	//在位点i之前插入元素
	s=(Node*)malloc(sizeof(Node))//申请一个新结点
	s->data=e;//值e置入s的数据域
	s->next=pre->next;//修改指针，完成插入操作
	pre->next=s;
	return OK;
}
