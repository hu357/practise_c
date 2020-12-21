void SeeDoctor()
{
	InitQueue(Q);
	flag=1;
	while(flag){
		printf("\n 请输入命令：");
		ch=getch();
		switch(ch){
			case'a':printf("\n 病历号：");
					scanf("%d",&n);
					EnterQueue(&Q,n);
					break;
			case'n':if(!IsEmpty(Q))
					{
						DeleteQueue(&Q,&n);
						printf("\n 病历号为%d的病人就诊",n);
					}
					else printf("\n 五病人等候就诊");
					break;
			case'q':printf("\n 今天停止挂号，下列病人依次就诊：");
					while(!IsEmpty(Q))
						{
							DeleteQueue(&Q,&n);
							printf("% d",n);
						}
					flag=0;
					break;
			default:printf("\n 非法命令！");
		}
	}
}






































void SeeDoctor()
{
	InitQueue(Q);
	flag=1;
	while(flag){
		printf("\n 请输入命令：");
		ch=getch();
		switch(ch){
			case'a':printf("\n 病历号：");//病人到达
					scanf("%d",&n);
					EnterQueue(&Q,n);
					break;
			case'n':if(!IsEmpty(Q))//护士让下一位患者就诊，队伍不为空时
					{
						DeleteQueue(&Q,&n);
						//DeleteQueue(Q,x)，将队列Q的队头元素出队，并用x带回其值
						printf("\n 病历号为%d的病人就诊",n);
					}
					else printf("\n 五病人等候就诊");
					break;
			case'q':printf("\n 今天停止挂号，下列病人依次就诊：");//不再接受病人排队，队满/队空
					while(!IsEmpty(Q))
						{
							DeleteQueue(&Q,&n);
							printf("% d",n);
						}
					flag=0;
					break;
			default:printf("\n 非法命令！");
		}
	}
}