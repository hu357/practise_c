int GetTop(SeqStack * S ,StackElemType *x)
{
	if(S->top==-1)
		return(FALSE);
	else
	{
		*x=S->elem[S->top];
		return(TRUE);
	}
}







































int GetTop(SeqStack * S ,StackElemType *x)
{//将栈S栈顶元素读出，放到x所指的存储空间中，栈顶指针保持不变
	if(S->top==-1)//栈为空
		return(FALSE);
	else
	{
		*x=S->elem[S->top];//栈顶元素赋给x
		return(TRUE);
	}
}