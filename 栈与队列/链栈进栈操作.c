int Pop(LinkStack top,StackElementType x)
{
	LinkStackNode * temp;
	temp=(LinkStackNode*)maooloc(sizeof(LinkStackNode));
	if(temp==NULL) return(FALSE);
	temp->data=x;
	temp->next=top->next;
	top->next=temp;
	return(TRUE);
}







































int Pop(LinkStack top,StackElementType x)
{//将数据元素x压入栈top中
	//元素x进栈
	LinkStackNode * temp;
	temp=(LinkStackNode*)maooloc(sizeof(LinkStackNode));//申请新结点temp
	if(temp==NULL) return(FALSE);//申请空间失败
	temp->data=x;//将新结点数据域设置为x
	temp->next=top->next;//temp结点的next域为栈顶指针top的next域	
	top->next=temp;//修改当前栈顶指针
	return(TRUE);//链栈要注意指针的方向是从栈顶指向栈底的
}