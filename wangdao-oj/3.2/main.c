#include <stdio.h>
//scanf录入多个数据
int main() {
    int i;
    char j;
    float k;
    scanf("%d %c%f",&i,&j,&k);

    printf("%.2f\n",i+j+k);
    return 0;
}
