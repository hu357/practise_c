#define OK 1
#define ERROR 0
int InsList(SeqList *L,int i,ElemType e)
{
	int k;
	if(i<1)||(i>L->last+2)
	{
		printf("插入位置i值不合法");
		return(ERROR);
	}
	if(L->last>=MAXSIZE-1)
	{
		printf("表已满，无法插入");
		return(ERROR);
	}
	for(k=L->last;k>=i-1;k--)
		L->elem[k+1]=L->elem[k];
	L->elem[i-1]=e;
	L->last++；
	return(OK);
}



	
























#define OK 1
#define ERROR 0//预定义常量
int InsList(SeqList *L,int i,ElemType e)//在线性表第i个位置插入元素e
//在顺序表L中第i个数据元素之前插入一个元素e	  i的合法取值范围是1<=i<=L->last+2
{
	int k;
	//last为最后一个元素的位置，下标为i-1,表长度为(i-1)+1+1=last+2
	if(i<1)||(i>L->last+2)//首先判断插入值是否合法
	//判断插入本身是否存在问题（如果插入元素位置比整张表的长度+1还大（如果相等，是尾随的情况），
    //或者插入的位置本身不存在，程序作为提示并自动退出）
	{
		printf("插入位置i值不合法");
		return(ERROR);
	}
	if(L->last>=MAXSIZE-1)
	{
		printf("表已满，无法插入");
		return(ERROR);
	}
	//插入操作，需要将从插入位置开始的后续元素，逐个后移
	for(k=L->last;k>=i-1;k--)//为插入元素移动位置
		L->elem[k+1]=L->elem[k];
	L->elem[i-1]=e;//在C语言数组中，第i个元素的下标为i-1，后移完成后，直接将所需插入元素，添加到顺序表的相应位置
	L->last++；//由于添加了元素，所以长度+100
	return(OK);
}




























#define MAXSIZE 100/*顺序表的插入运算*/
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef struct
{
 ElemType elem[MAXSIZE];//用数组模拟线性表
 int last;//记录线性表中最后一个元素的位置
}SeqList;
int InsList( SeqList *L,ElemType e,int i)/*在线性表第i个位置插入一个元素e*/
{
 int k;
 if((i<1)||(i>L->last+2))
 {
 printf("插入位置的i值不合法!");
 return ERROR;
 }
 if(L->last>=MAXSIZE-1)
 {
  printf("表满无法插入!");
  return ERROR;
 }
 for(k=L->last;k>=i-1;k--)
  L->elem[k+1]=L->elem[k];
 L->elem[i-1]=e;
 L->last++;
 return OK;
}
void main()
{
 SeqList l;
 int p,q,r,i,j;
 printf("请输入线性表的长度：");
 scanf("%d",&p);
 l.last=p-1;
 printf("/n请输入线性表中各元素的值：");
 for(i=0;i<=l.last;i++)
  scanf("%d",&l.elem[i]);
 printf("/n请输入要插入的位置：");
  scanf("%d",&i);
 printf("请输入要插入的元素值：");
 scanf("%d",&r);
 q=InsList(&l,r,i);
 if(q==1)
 {
  printf("插入成功!插入后的线性表为：");
  for(j=0;j<=l.last;j++)
  printf("%d ",l.elem[j]);
 }
 else 
  printf("插入失败！");
 }

 
