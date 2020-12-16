int Pop(DqStack * S,StackElementType * x,int i)
{
	switch(i)
	{
		case 0:
			if(S->top[0]==-1) return(FALSE);
			*x=S->Stack[S->top[0]];
			S->top[0]--;
			break;
		case 1:
			if(S->top[1]==M) return(FALSE);
			*x=S->Stack[S->top[1]];
			S->top[1]++;
			break;
		default:
			return(FALSE);
	}
	return(TRUE);
}








































int Pop(DqStack * S,StackElementType * x,int i)
{//从i号栈堆中弹出栈顶元素并送入到x中
	switch(i)
	{
		case 0://0号栈出栈
			if(S->top[0]==-1) return(FALSE);
			*x=S->Stack[S->top[0]];
			S->top[0]--;//0号栈栈顶指针前移
			break;
		case 1://1号栈出栈
			if(S->top[1]==M) return(FALSE);
			*x=S->Stack[S->top[1]];
			S->top[1]++;//1号栈栈顶指针后移
			break;
		default:
			return(FALSE);
	}
	return(TRUE);
}