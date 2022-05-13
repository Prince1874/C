#include<stdio.h>
int main()
{
    int a=3,b=4;

    printf("Number before Swap: %d %d\n", a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Number after swap:  %d %d", a,b);
    printf("\n");
    return 0;
}