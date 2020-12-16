#define MAXSIZE 50
typedef struct
{
	QueueElementType element[MAXSIZE];
	int front;
	int rear;
}SeqQueue;










































#define MAXSIZE 50//队列的最大长度
typedef struct
{
	QueueElementType element[MAXSIZE];//队列的元素空间
	int front;//头指针指示器
	int rear;//尾指针指示器
}SeqQueue;