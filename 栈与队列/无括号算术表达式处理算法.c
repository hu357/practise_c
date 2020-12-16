int ExpEvaluation()
{
	InitStack(&OPTR);
	InitStack(&OVS);
	Push(&OPTR,'#');
	printf("\n\nPlease input an expression(Ending with #):");
	ch=getchar();
	while(ch!='#'||GetTop(OPTR)!='#')
	{
		if(!In(ch,OPSet))
		{
			n=GetNumber(ch);
			push(&OVS,n);
			ch=getchar();
		}
		else
			switch(Compare(ch,GetTop(OPTR)))
			{
				case '>':Push(&OPTR,ch);
					ch=getchar(); break;
				case '=':
				case '<':Pop(&OPTR,&op);
				Pop(&OVS,&b);
				Pop(&OVS,&a);
				v=Execute(a,op,b);
				Push(&OVS,v);
				break;
			}
	}
	v=GetTop(OVS);
	return(v);
}















































int ExpEvaluation()
{//读入一个简单算术表达式并计算其值。OPTR和OVS分别为运算符栈和运算数栈，OPSet为运算符集合
	InitStack(&OPTR);
	InitStack(&OVS);//初始化
	Push(&OPTR,'#');//为了便于操作，首先将#压入OPTR栈
	printf("\n\nPlease input an expression(Ending with #):");
	ch=getchar();
	while(ch!='#'||GetTop(OPTR)!='#')//GetTop()通过函数返回栈顶元素
	{
		if(!In(ch,OPSet))//不是操作符，是操作数，进OVS栈
		{
			n=GetNumber(ch);
			push(&OVS,n);
			ch=getchar();
		}
		else
			switch(Compare(ch,GetTop(OPTR)))
			{
				case '>':Push(&OPTR,ch);
					ch=getchar(); break;
				case '=':
				case '<':Pop(&OPTR,&op);//形成运算
				Pop(&OVS,&b);
				Pop(&OVS,&a);
				v=Execute(a,op,b);//对a和b进行op运算，存入变量v中
				Push(&OVS,v);
				break;
			}
	}
	v=GetTop(OVS);//读运算数栈的栈顶存入变量v中
	return(v);
}