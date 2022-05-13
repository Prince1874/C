/*#include<stdio.h>

int main()
{ 
   int n=5;
   int a[]={1,2,3,5};
   int mn=0;
   int i=0;
   
   while(i<4)
   {
     int c=0;
     for(int j=0; j<4; j++)
     {
       if(a[i]+1 == a[j] && i != 4-1)
       {
          c++;
          break;
       }
       mn = a[i]+1;
     }
     
     if(c==0)
     {
        printf("%d",mn);
     }
     i++;
    }
    return 0;
}      
 */
 
#include<stdio.h>

int main()
{ 
   int n=5;
   int a[]={4,2,3,5};   
   int nsum=0,sum=0, mnum=0;
   
   nsum = (n*(n+1))/2;
   
   for(int i=0; i<n-1; i++)
   {
      sum= sum+a[i];
   }
   mnum = nsum-sum;
   
   printf("%d",mnum);
   
  return 0;
}   
       
