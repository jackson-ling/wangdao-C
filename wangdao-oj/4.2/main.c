#include <stdio.h>
//计算任意一个正整数的阶乘

//标准答案（正序递增相乘）
int main()
{
   int i,n,result;
   result=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++)//易错：循环里面用的是  分号  隔开；
   {
       result*=i;
   }
    printf("%d",result);
   return 0;
}



//int main() {
//    int i,j,result;
//    result=1;
//    scanf("%d",&i);
//    while(i)
//    {
//        result*=i;//初始化第一次的值：i * 1=i，之后每循环一次i减一，实现阶乘
//        i--;
//    }
//    printf("%d\n",result);
//    return 0;

