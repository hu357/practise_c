void PolyAdd(Polylist polya,Polylist polyb)
{
	Polynode *p,*q,*tail,*temp;
	int sum;
	p=polya->next;
	q=polyb->next;
	tail=polya;
	while(p!=NULL&&q!=NULL)
	{
		if(p->exp<q->exp)
			{tail->next=p;tail=p;p=p->next;}
		else if(p->exp==q->exp)
		{
			sum=p->coef+q->coef;
			if(sum!=0)
			{
				p->coef=sum;
				tail->next=p;tail=p;
				p=p->next;
				temp=q;q=q->next;free(temp);
			}
			else
			{
				temp=p;p=p->next;free(temp);
				temp=q;q=q->next;free(temp);
			}
		}
		else
		{
			tail->next=q;tail=q;
			q=q->next;
		}
	}
	if(p!=NULL)
		tail->next=p;
	else
		tail->next=q;
}









































void PolyAdd(Polylist polya,Polylist polyb)
//将两个多项式相加，然后将和多项式存放在多项式polya中，并将多项式polyb删除
{
	Polynode *p,*q,*tail,*temp;
	int sum;
	p=polya->next;//p指向polya多项式链表中的第一个结点
	q=polyb->next;//q指向polyb多项式链表中的第一个结点
	tail=polya;//tail指向和多项式的尾结点
	while(p!=NULL&&q!=NULL)//当两个多项式均未扫描结束时
	{
		if(p->exp<q->exp)//p指向的多项式指数小于q指向的多项式的指数，将p结点加入到和多项式中去
			{tail->next=p;tail=p;p=p->next;}
		else if(p->exp==q->exp)//若指数相等，则相应的系数相加
		{
			sum=p->coef+q->coef;//sum为系数相加之和
			if(sum!=0)//系数和非零，则将系数和置入结点p，p加入到和多项式，释放结点q，并将指针后移
			{
				p->coef=sum;
				tail->next=p;tail=p;
				p=p->next;
				temp=q;q=q->next;free(temp);//释放被删除的结点q所占用的内存空间
			}
			else//若系数和为零，则删除结点p与q，并将指针指向下一个结点
			{
				temp=p;p=p->next;free(temp);
				temp=q;q=q->next;free(temp);
			}
		}
		else//p指向的多项式指数大于q指向的多项式的指数，将q加入到和多项式中去
		{
			tail->next=q;tail=q;
			q=q->next;
		}
	}
	if(p!=NULL)//多项式A中还有剩余，则将剩余的结点加入到和多项式中去
		tail->next=p;
	else//多项式B中还有剩余，则将剩余的结点加入到和多项式中去
		tail->next=q;
}