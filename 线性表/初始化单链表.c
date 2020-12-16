InitList(LinkList *L)
{
	*L=(LinkList)malloc(sizeof(Node));
	(*L)->next=NULL;
}


typedef struct Link{
    char data; 
    struct Node * next; 
}LNode,*Linklist; 








































/每一个结点只包含一个指针域的链表称为单链表
InitList(LinkList *L)//初始化
{
	*L=(LinkList)malloc(sizeof(Node));//建立头结点
	(*L)->next=NULL;//建立空的单链表L
}
//L是指向单链表的头结点的指针，用来接收主程序中待初始化单链表的头结点的地址
//*L相当于主程序中待初始化单链表的头指针变量




typedef struct Link{
    char data; //存储链表数据
    struct Node * next; //代表指针域，指向直接后继元素，存储结点的地址
}LNode,*Linklist; 