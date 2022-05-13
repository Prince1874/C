#include<stdio.h>

int main()  
{ 
    int arr[9] = {10,20,30,10,30,20,78,69,78};
    int i,j,temp;
    
    for(i=0; i<9; i++)
    { 
       temp=0;  
        for(j=0; j<9; j++)
        {
           if(arr[i]==arr[j])
           {
             temp++;
           }  
        } 
        if(temp==1)
        {
          printf("%d",arr[i]);    
        } 
    }             
   return 0;         
}

