#include<stdio.h>
int main() {
	
    int n,d,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    printf("%d",sum);
    return 0;
}

