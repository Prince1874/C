#include <stdio.h>

int main()
{
  int arr[7]={-4,-3,-2,-1,4,3,2};
  int current=0, halt=0;
  
  for(int i=0; i<7; i++)
  {
      current = current+arr[i];
     if(halt<current) 
     {
         halt=current;
     }       
       
  }        printf("%d ", halt);     
   return 0;         
}

    
