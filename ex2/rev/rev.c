#include<stdio.h>

int main()
{
    int x,i;
    int arr[];

    printf("Enter Number:");
    scanf("%d",x);

    for(i=0,x>0,i++)
    {
        arr[i]=x%10;
        x = x/10;
    } 
    
    printf("%d",arr[])
}
