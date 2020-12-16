InitCLinkList(LinkList *CL)
{
	* CL=(LinkList)malloc(sizeof(Node));
	(* CL)->next=* CL;
}












































InitCLinkList(LinkList *CL)
//CL用来接收待初始化的循环单链表的头指针变量的地址
{
	* CL=(LinkList)malloc(sizeof(Node));//建立头结点，并分配空间
	(* CL)->next=* CL;//建立空的循环单链表
}