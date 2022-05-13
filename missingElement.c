#include<stdio.h>

int main()
{

   int n=5;
   int a[]={1,2,3,5};
   int i;
   
   for(i=0; i<=n; i++)
   {
      int count=0;
      if(a[i] == i+1 )
         { 
               count++;
         } 
         if(count==0) 
             printf("%d",i); 
    } 
    return 0;    

}



