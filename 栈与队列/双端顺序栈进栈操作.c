int Push(DqStack * S,StackElemmentType x,int i)
{
	if(S->top[0]+1==S->top[1])
		return(FALSE);
	switch(i)
	{
		case 0:
			S->top[0]++;
			S->Stack[S->top[0]]=x;
			break;
		case 1:
			S->top[1]--;
			S->Stack[S->top[1]]=x;
			break;
		default:
			return(FALSE);
	}
	return(FALSE);
}








































int Push(DqStack * S,StackElemmentType x,int i)
{//把数据元素x压入i号堆栈
	if(S->top[0]+1==S->top[1])//栈已满
		return(FALSE);
	switch(i)
	{
		case 0://0号栈
			S->top[0]++;
			S->Stack[S->top[0]]=x;
			break;
		case 1://1号栈
			S->top[1]--;
			S->Stack[S->top[1]]=x;
			break;
		default://参数错误
			return(FALSE);
	}
	return(FALSE);
}