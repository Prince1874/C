#include<stdio.h>
int fact(int);

int main()
{
   int n, f;
   printf("Enter a number: ");
   scanf("%d",&n);
   f = fact(n);
    
    printf("The factorial is %d",f); 
    
    
    return 0;
}       

int fact(int n)
{
   int f=1;
  
    for(int i=n; i>1; i--)
    {
       f=f*i;
    }
    
    return f;
}        
