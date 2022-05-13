#include<stdio.h>
int main()
{
    int arr[10],n,i,j;

    printf("Enter a Nubmer: ");
    scanf("%d",&n);

    printf("Enter the Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[]
            }
        }
    }
}