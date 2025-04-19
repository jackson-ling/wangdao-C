//结构体的练习
typedef struct student
{
    int num;
    char name[20];
    char sex;
}stu ;

//#include<stdio.h>
//int main()
//{
//    //如果需要录入数据，应该定义一个结构体数组
//    stu s[3];//代表存放三个结构体  //注意这里用这个需要声明typedef，要不然会报错
//    for(int i=0;i<1;i++)
//    {
//        scanf("%d %s %c",&s[i].num,s[i].name,&s[i].sex);//name存在数组里面，本身就是一个地址，可以不用取地址
//    }
//    for(int i=0;i<1;i++)
//    {
//        printf("%d %s %c",s[i].num,s[i].name,s[i].sex);
//    }
//
//
//
//}



//第二种版本
#include<stdio.h>
int main()
{
    stu s;
    scanf("%d %s %c",&s.num,s.name,&s.sex);
    printf("%d %s %c",s.num,s.name,s.sex);
}