#include<stdio.h>
int Compare(char str1[], char str2[]);
int main()
{ 
    char x[30];
    char y[30];
    int result;
    
    printf("Enter First String: ");
    scanf("%s",x);
    
     printf("Enter second String: ");
     scanf("%s",y);
     result = Compare(x,y);
     printf("%d",result);
    }
    
    
    int Compare(char str1[], char str2[])
    { 
        int i = 0, flag = 0; 
        while(str1[i] != '\0' && str2[i] != '\0')
        { 
           if(str1[i] != str2[i]){ 
            flag = 1; 
             break; 
              } 
              i++; 
          } 
            if(flag == 0 && str1[i] == '\0' && str2[i] == '\0') return 0; 
            else return 1; 
         } 
