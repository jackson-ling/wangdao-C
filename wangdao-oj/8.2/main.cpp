//C++引用的练习，注意提交的时候修改语言种类

#include<stdio.h>
#include<stdlib.h>
void print(char *&a)//注意引用（&），必须和变量名紧邻，这个a可以是任意的，只是一个变量
{
    char *p;
    p=(char *)malloc(100);
    fgets(p,100,stdin);
    puts(p);
}

int main()
{
     char *c;//定义一个指针变量，传给子函数
     print(c);//调用函数，把子函数执行的内容存到c里面，通过子函数的输出，调用函数之后就有值了

}
