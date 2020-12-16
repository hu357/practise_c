#define Stack_Size 50
typedef struct 
{
	StackElemType elem[Stack_Size];
	int top;
}SeqStack;











































#define Stack_Size 50//设栈中元素个数为50
typedef struct 
{
	StackElemType elem[Stack_Size];//用来存放栈中元素的一维数组
	int top;//用来存放栈顶元素的下标，top为-1表示空栈
}SeqStack;