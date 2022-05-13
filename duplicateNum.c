#include<stdio.h>

int main()
{
     int num[5];
     int i;
     
     printf("Enter the five digit brlow:\n");
     
     for(i=0; i<5; i++)
     {
          scanf("%d",&num[i]);
     }
     if(num[0]==num[1] || num[0]==num[2] || num[0]==num[3] || num[0]==num[4])  
     {
        printf("Duplicate Entry!");
     }
     else
     {
         printf(" NO Duplicate Entry!");
     }        
     
      return 0;
 }     
