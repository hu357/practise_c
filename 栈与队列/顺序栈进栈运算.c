int Push(SeqStack * S,StackElemType x)
{
	if(S->top==Stack_Size-1)
		return(FALSE);
	S->top++;
	S->elem[S->top]=x;
	return(TRUE);
}









































int Push(SeqStack * S,StackElemType x)
{//将x置入S栈新栈顶
	if(S->top==Stack_Size-1)
		return(FALSE);//栈已满，进栈会发生上溢
	S->top++;//修改栈顶指针
	S->elem[S->top]=x;//x进栈
	return(TRUE);
}