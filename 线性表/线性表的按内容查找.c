int Locate(SeqList L,ElemType e)
{
	i=0;
	while((i<=L.last)&&(L.elem[i]!=e))
		i++;
	if(i<=L.last)
		return(i+1);
	else
		return(-1);
}







































int Locate(SeqList L,ElemType e)
//在顺序表L中查找与e相等的元素，若L.elem[i]=e,则找到该元素，若找不到，则返回-1
{
	i=0;//i为扫描计时器，初值为0，即从第一个元素开始比较
	while((i<=L.last)&&(L.elem[i]!=e))//顺序扫描表，直到找到值为e的元素，或扫描到表尾未找到
		i++;
	if(i<=L.last)
		return(i+1);//若找到值为e的元素，则返回其序号
	else 
		return(-1);//若没有找到，则返回空序号
}