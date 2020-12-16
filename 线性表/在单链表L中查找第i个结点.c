Node* Get(LinkList L,int i)
{
	int j;
	Node *p;
	if(i<=0) return NULL;
	p=L;j=0;
	while(p->next!=NULL)&&(j<i)
	{
		p=p->next;
		j++;
	}
	if(i==j) return p;
	else return NULL;
}



































Node* Get(LinkList L,int i)
//也可写为LinkList Get(LinkList L,int int到的结点)
//在带头结点的单链表L中查找第i个结点，若找到(1<=i<=n)，则返回该结点的存储位置；否则返回NULL
{
	int j;//计数器，累计当前扫描过的结点数(初值为0)
	Node *p;//指针p指向当前扫描到的结点，初值指向头结点
	if(i<=0) return NULL;
	p=L;j=0;//从头结点开始扫描
	while(p->next!=NULL)&&(j<i)
	{
		p=p->next;//扫描下一个结点
		j++;//已扫描结点计数器
	}
	if(i==j) return p;//找到第i个结点
	else return NULL;//找不到。i<=0或i>n
}//Get