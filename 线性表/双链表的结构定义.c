typedef struct DNode
{
	ElemType data;
	struct DNode *point,*next;
}DNode,* DoubleList;












































typedef struct DNode
{
	ElemType data;//数据域
	struct DNode *prior,*next;//前驱指针和后继指针
}DNode,* DoubleList;