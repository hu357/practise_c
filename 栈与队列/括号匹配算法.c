void BracketMatch(char * str)
{
	Stack S,int i;char ch;
	InitStack(&S);
	for(i=0;str[i]!='\0';i++)
	{
		switch(str[i]){
			case '(':
			case '[':
			case '{':
				Push(&S,str[i]);
				break;
			case ')':
			case ']':
			case '}':
				if(IsEmpty(&S))
					{printf("\n右括号多余！");return;}
				else
				{
					GetTop(&S,&ch);
					if(Match(ch,str[i]))
						Pop(&S,&ch);
					else
						{printf("\n对应的左右括号不同类！");return;}
				}
		}
	}
	if(IsEmpty(S))
		printf("\n括号匹配！");
	else
		printf("\n左括号多余！");
}















































void BracketMatch(char * str)
{//str[]中为输入的字符串，利用堆栈技术来检查该字符串中的括号是否匹配
	Stack S,int i;char ch;
	InitStack(&S);//初始化
	for(i=0;str[i]!='\0';i++)//对字符串中的字符逐一扫描
	{
		switch(str[i]){
			case '(':
			case '[':
			case '{':
				Push(&S,str[i]);
				break;
			case ')':
			case ']':
			case '}':
				if(IsEmpty(&S))//潘栈空函数
					{printf("\n右括号多余！");return;}
				else
				{
					GetTop(&S,&ch);//读栈顶
					if(Match(ch,str[i]))//用Match判断两个括号是否匹配
						Pop(&S,&ch);//已匹配的左括号出栈
					else
						{printf("\n对应的左右括号不同类！");return;}
				}
		}//switch
	}//for
	if(IsEmpty(S))
		printf("\n括号匹配！");
	else
		printf("\n左括号多余！");
}