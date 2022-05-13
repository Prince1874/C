#include<stdio.h>
#define size 25

void input(int a[], int n);
void show(int a[], int n);
int main()
{
    int a[size], n;
    printf("Enter the size of array between 1 to 25: ");
    scanf("%d",&n);
    
    if(n>size)
    {
       printf("Invalid Number retry!");
       return 0;
    }
    input(a,n);
    show(a,n);
    return 0;
}       

void input(int a[], int n)
{
   int i;
   printf("Enter the numbers:\n");
   for(i=0; i<n; i++)
   {
     scanf("%d", &a[i]);
   }
}   

void show(int a[], int n)
{
   int i;
   printf("Enter elemments are:\n");
   for(i=0; i<n; i++)
   {
     printf("%d\n", a[i]);
   }
}        
