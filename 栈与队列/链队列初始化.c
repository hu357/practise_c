int InitQueue(LinkQueue * Q)
{
	Q->front=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	if(Q->front!=NULL)
	{
		Q->rear=Q->front;
		Q->front->next=NULL;
		return(TRUE);
	}
	else return(FALSE);
}






































int InitQueue(LinkQueue * Q)
{//将Q初始化为一个空的链队列
	Q->front=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));//头结点
	if(Q->front!=NULL)
	{
		Q->rear=Q->front;//队列Q头指针指向的结点等于尾指针指向的结点
		Q->front->next=NULL;
		return(TRUE);
	}
	else return(FALSE);//溢出
}