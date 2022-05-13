// Program Input = prince
// Program Output = PrInCe



#include<stdio.h>

int main()
{
    char str[30],i=0,j=0;
    printf("Enter a Strig: ");
    scanf("%s",str);

    while(str[i]!='\0')
    {
    	if(i%2==0)
	{
        	str[i] = str[i] - 32;
	} 
	i++;    
     }        
    printf("\nString in Mix Case: %s\n", str);
    
    return 0;
}  
