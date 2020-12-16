typedef struct node
{
	StackElementType data;
	struct node * next;
}LinkStackNode;
typedef LinkStackNode * LinkStack;



typedef struct StackNode
{
    int data;
    struct StackNode *next;
}StackNode,*LinkStack;








































typedef struct node
{
	StackElementType data;//data数据域,StackElementType：元素类型，需要什么类型就写什么类型
	struct node * next;//next指向下一个结点的指针
}LinkStackNode;
typedef LinkStackNode * LinkStack;
//typedef将结构体等价于类型名Node，指针LinkStack