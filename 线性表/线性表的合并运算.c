void mergeList(SeqList *LA,SeqList *LB,SeqList *LC)
{
	int i,j,k,l;
	i=0;j=0;k=0;
	while(i<=LA->last&&j<=LB->last)
	if(LA->elem[i]<=LB->elem[j])
	{
		LC->elem[k]=LA->elem[i];
		i++;k++;
	}
	else
	{
		LC->elem[k]=LB->elem[j];
		j++;k++;
	}
	while(i<=LA->last)
	{
		LC->elem[k]=LA->elem[i];
		i++;k++;
	}
	while(j<=LB->last)
	{
		LC->elem[k]=LB->elem[j];
		j++;k++;
	}
	LC->last=LA->last+LB->last+1;
}






















void mergeList(SeqList *LA,SeqList *LB,SeqList *LC)
{
	int i,j,k,l;
	i=0;j=0;k=0;
	while(i<=LA->last&&j<=LB->last)//保证i，j在合法范围内
	if(LA->elem[i]<=LB->elem[j])
	{
		LC->elem[k]=LA->elem[i];//将LA中的i下标元素赋给LC的k下标
		i++;k++;
	}
	else
	{
		LC->elem[k]=LB->elem[j];
		j++;k++;
	}
	while(i<=LA->last)//当表LA有剩余元素时，则将表LA余下的元素赋给表LC
	{
		LC->elem[k]=LA->elem[i];
		i++;k++;
	}
	while(j<=LB->last)//当表LB有剩余元素时，则将表LB余下的元素赋给表LC
	{
		LC->elem[k]=LB->elem[j];
		j++;k++;
	}
	LC->last=LA->last+LB->last+1;
}
