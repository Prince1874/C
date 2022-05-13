#include<stdio.h>

int main()
{
   int a=0, b=0,i;
   int A[3];
   int B[3];
   
   for(i=0; i<3; i++)
   {
       scanf("%d",&A[i]);
   }    
   
   if(A[i]>B[0])
   {
      a=a+1;
   }
   else   if(A[i]==B[0])  
   {
   
   }
    else   if(A[i]<B[0])   
    {
      b=b+1;
    }
    
   if(A[i]>B[1])
   {
      a=a+1;
   }
   else   if(A[i]==B[1])  
   {
   
   }
    else   if(A[i]<B[1])   
    {
      b=b+1;
    }
    
    if(A[i]>B[2])
   {
      a=a+1;
   }
   else   if(A[i]==B[2])  
   {
   
   }
    else   if(A[i]<B[2])   
    {
      b=b+1;
    }
    
    printf("%d %d",a,b);  
    printf("\n");
   return 0;
}
