#define MAXSIZE 100
typedef struct 
{
	ElemType elem[MAXSIZE];
	int last;
}SeqList;





typedef struct 
{
	ElemType *elem;
	int length;
	int listsize;
}SeqList;
















































#define MAXSIZE 100//此处的宏定义常量表示线性表的最大长度
typedef struct 
{
	ElemType elem[MAXSIZE];//线性表占用的数组空间
	int last;//记录线性表中的最后一个元素在数组elem所在位置，即下标值，空表置为-1
}SeqList;//顺序表的数据类型



typedef struct 
{
	ElemType *elem;//存储空间基址
	int length;//当前长度
	int listsize;//当前分配的存储容量（以sizeof(ElemType)为单位）
}SeqList;

//结构体内，有三个元素：存储空间基地址，类似于数组首地址；当前长度，记录顺序表中有效存储单元个数；当前分配的存储容量，顺序表中，最多容纳的存储单元个数。当顺序表中所有存储单元已经被使用，在下次插入元素之前，需要新增存储单元。这点是数组所不具有的特性。