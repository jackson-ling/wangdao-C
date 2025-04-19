//统计字符个数

#include<stdio.h>
int main()
{
    //C语言中如何---1.录入一个数字表示数组的长度
    //            2.手动录入数组数据的值

/*    int n,i;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
*/

    int n,i,c,cnt;
    int a[100];
    cnt=0;     //易错：注意初始化变量的值
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//注意，这里是吧值存到数组里面，所以----要取数组a[i]的地址
    }

  /*
   * 当然也可以定义一个整型变量，再把整型变量的值赋给数组
   *
   *    int x;
   *
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            a[i]=x;//注意写法：把x的值赋给a[i]
        }

   */

    for(i=0;i<n;i++)
    {
        if(a[i]==2)//注意if-else的语法结构-----1.括号里面写条件 ； 2.不用加分号 ； 3.用一个大括号来表示if条件下执行的语句
        {
            cnt+=1;
        }
    }

    printf("%d",cnt);

    return 0;


    //提醒：注意代码的规范性和整洁性;第一次提交compile error---for循环里面的结构体格式不正确
    //                                                 （同时尽量保持紧凑，没有代码的地方就不要空行）
}