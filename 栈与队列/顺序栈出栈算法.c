int Pop(SeqStack * S ,StackElemType *x)
{
	if(S->top==-1)
		return(FALSE);
	else
	{
		*x=S->elem[S->top];
		S->top--;
		return(TRUE);
	}
}















































int Pop(SeqStack * S,StackElemType *x)
{//将S栈顶元素弹出，放到x所指的存储空间中带出
	if(S->top==-1)//栈为空，出栈会发生下溢
		return(FALSE);
	else
	{
		*x=S->elem[S->top];//栈顶元素赋给x
		S->top--;//修改栈顶指针
		return(TRUE);
	}
}