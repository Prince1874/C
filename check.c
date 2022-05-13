#include<stdio.h>

int main()
{
    char s[5], i=0;
     
     printf("Enter a Letter: ");
     scanf("%s",s);
     
     while(s[i]!='\0')
     {
         s[i]=s[i] -32;
     }
     if(s[i]%2==0)
     {
        printf("Even ");
     }
     else
     {
         printf("Odd ");
     }
     printf("\nCharacter is %s", s);           
     return 0;
}           
