#include<stdio.h>

int main()
{
    int n, *p;

    printf("Enter a Number: ");
    scanf("%d", &n);

    p=&n;

    if(*p%2==0)
    {
        printf("E Number");
    }
    else
    {
        printf("Odd Number");
    }
  return 0;    
}

