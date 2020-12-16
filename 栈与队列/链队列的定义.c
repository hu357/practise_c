typedef struct Node
{
	QueueElementType data;
	struct Node * next;
}LinkQueueNode;

typedef struct
{
	LinkQueueNode * front;
	LinkQueueNode * rear;
}LinkQueue;






































typedef struct Node
{
	QueueElementType data;//数据域
	struct Node * next;//指针域
}LinkQueueNode;

typedef struct
{
	LinkQueueNode * front;//LinkQueueNode，单链表队列里每一个结点的类型；队头指针
	LinkQueueNode * rear;//队尾指针
}LinkQueue;//链队列