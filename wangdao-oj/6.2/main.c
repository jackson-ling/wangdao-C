#include<stdlib.h>
#include <stdio.h>
int main()
{
    int size;
    char c;
    char*p;
    scanf("%d",&size);
    p=(char*)malloc(size);
    scanf("%c",&c);//重点；用第二个scanf读取第一个scanf执行完后输出缓冲区残留的\n
    fgets(p,size,stdin);
    puts(p);
    return 0;
}
