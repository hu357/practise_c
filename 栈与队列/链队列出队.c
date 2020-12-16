int DeleteQueue(LinkQueue * Q,QueueElementType * x)
{
	LinkQueueNode * p;
	if(Q->front==Q->rear)
		return(FALSE);
	p=Q->front->next;
	Q->front->next=p->next;
	if(Q->rear==p)
		Q->rear==Q->front;
	*x=p->data;
	free(p);
	return(TRUE);
}




































int DeleteQueue(LinkQueue * Q,QueueElementType * x)
{//将队列Q的队头元素出队，并存放到x所指的存储空间中
	LinkQueueNode * p;//队头元素
	if(Q->front==Q->rear)
		return(FALSE);//空的链队列
	p=Q->front->next;
	Q->front->next=p->next;//队头元素p出队
	if(Q->rear==p)//如果队中只有一个元素p，则p出队后成为空队
		Q->rear==Q->front;
	*x=p->data;//将p元素的数值，存放到x所指的存储空间中
	free(p);//释放存储空间
	return(TRUE);
}