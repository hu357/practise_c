void YangHuiTriangle()
{
	SeqQueue Q;
	InitQueue(&Q);
	EnterQueue(&Q,1);
	for(n=2;n<=N;n++)
	{
		EnterQueue(&Q,1);
		for(i=1;i<=n-2;i++)
		{
			DeleteQueue(&Q,&temp);
			Printf("% d",temp);
			GetHead(Q,&x);
			temp=temp+x;
			EnterQueue(&Q,temp);
		}
		DeleteQueue(&Q,&x);
		printf("% d",x);
		EnterQueue(&Q,1)
	}
	while(!IsEmpty(Q))
	{
		DeleteQueue(&Q,&x);
		printf("% d",x);
	}
}











































void YangHuiTriangle()
{
	SeqQueue Q;
	InitQueue(&Q);
	EnterQueue(&Q,1);//第一行元素入队
	for(n=2;n<=N;n++)//产生第n行元素并入队，同时打印第n-1行的元素
	{
		EnterQueue(&Q,1);//第n行的第一个元素入队
		for(i=1;i<=n-2;i++)//利用队中第n-1行元素产生第n行的中间n-2个元素并入队
		{
			DeleteQueue(&Q,&temp);
			Printf("% d",temp);//打印第n-1行的元素
			GetHead(Q,&x);
			temp=temp+x;//利用队中第n-1行元素产生第n行元素
			EnterQueue(&Q,temp);
		}
		DeleteQueue(&Q,&x);
		printf("% d",x);//打印第n-1行的最后一个元素
		EnterQueue(&Q,1)//第n行的最后一个元素入队
	}
	while(!IsEmpty(Q))//打印最后一行元素
	{
		DeleteQueue(&Q,&x);
		printf("% d",x);
	}
}