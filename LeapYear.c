#include<stdio.h>

int main()
{
   int yr;
   printf("Enter a Year: ");
   scanf("%d",&yr);
   
   if(yr%4==0 && yr%100!=0  || yr%400==0)
   {
      printf("Leap Year");
   }
   else
   {
      printf("Normal year");
    }     
   return 0;
}
