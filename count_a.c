#include<stdio.h>
int main()
{
   int i,count=0;
   char string[50];
   
   printf("Enter a String: ");
   scanf("%[^\n]s", string);
   
   for(i=0; string[i]!='\0'; i++)
   {
      if(string[i]=='a' || string[i]=='A')
      count++;
   }
   printf("\nThe number of a in this string is %d", count);
   printf("\n");
   return 0;    
}   
