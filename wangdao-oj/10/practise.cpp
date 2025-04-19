#include<stdio.h>
#define maxsize 100
typedef int status;
typedef struct
{
   int data[maxsize];
   int length;
}sqlist;

//插入操作
status listinsert(sqlist &l ,int e,int i)
{
    if(i<1||i>l.length)
    {
        printf("false");
    }
    if(l.length==maxsize)
    {
        printf("false");
    }
    for(int j=l.length-1;j>=i-1;j--)
    {
        l.data[j+1]=l.data[j];
    }
    l.data[i-1]=e;
    l.length++;
}

//删除操作
status listdelete(sqlist &l,int i)
{
    if(i<1||i>l.length)
    {
        printf("false");
    }
    for(int j=i;j<=l.length-1;j++)
    {
        l.data[j-1]=l.data[j];
    }
    l.length--;
}



//初始化和定义都是在主函数钟进行的，只需要写好每个操作的算法打包成函数，在主函数中调用就行
int main()
{
    sqlist l;
    int e,i;
    l.data[0]=1;
    l.data[1]=2;
    l.data[2]=3;
    l.length=3;
    scanf("%d",&e);//读取插入的元素
    scanf("%d",&i);//读取删除的位置
    listinsert(l,e,2);
    for(int i=0;i<l.length;i++)
    {
        printf("%d   ",l.data[i]);
    }
    printf("\n");
    listdelete(l,i);
    for(int i=0;i<l.length;i++)
    {
        printf("%d   ",l.data[i]);
    }
}