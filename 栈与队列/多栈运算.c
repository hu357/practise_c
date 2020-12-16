#define M 10
typedef struct node 
{
	StackElementType data;
	struct node * next;
}LinkStackNode,*LinkStack;
LinkStack top[M];










































#define M 10//M个链栈
typedef struct node 
{
	StackElementType data;
	struct node * next;
}LinkStackNode,*LinkStack;
LinkStack top[M];
//top[0],top[1],top[2],...top[M-1]分别是M的连战的栈顶指针，分别指向M个不同的链栈