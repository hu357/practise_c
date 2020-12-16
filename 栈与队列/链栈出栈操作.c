int Pop(LinkStack top,StackElementType *x)
{
	LinkStackNode * temp;
	temp=top->next;
	if(temp==NULL)
		return(FALSE);
	top->next=temp->next;
	*x=temp->data;
	free(temp);
	return(TRUE);
}






































int Pop(LinkStack top,StackElementType *x)
{//将栈top的栈顶元素弹出，放到x所指的存储空间中
	LinkStackNode * temp;
	temp=top->next;
	if(temp==NULL)//栈为空
		return(FALSE);
	top->next=temp->next;//修改栈顶指针，指向新的栈顶元素
	*x=temp->data;//临时保存栈顶元素的空间，准备释放
	free(temp);//释放原栈顶元素空间
	return(TRUE);
}