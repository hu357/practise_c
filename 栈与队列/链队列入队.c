int EnterQueue(LinkQueue * Q,QueueElementType x)
{
	LinkQueueNode * NewNode;
	NewNode=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	if(NewNode!=NULL)
	{
		NewNode->data=x;
		NewNode->next=NULL;
		Q->rear->next=NewNode;
		Q->rear=NewNode;
		return(TRUE);
	}
	else return(FALSE);
}



































int EnterQueue(LinkQueue * Q,QueueElementType x)
{//将数据元素x插入到队列Q中
	LinkQueueNode * NewNode;
	NewNode=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));//为新结点NewNode分配空间
	if(NewNode!=NULL)
	{
		NewNode->data=x;//新结点的数据域为x
		NewNode->next=NULL;
		Q->rear->next=NewNode;//插入新结点
		Q->rear=NewNode;//尾指针指向新结点
		return(TRUE);
	}
	else return(FALSE);//溢出
}