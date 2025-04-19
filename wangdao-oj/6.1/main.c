void change(int *n)
{
    *n/=2;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);//注意取地址
    change(&n);
    printf("%d",n);
    return 0;
}
