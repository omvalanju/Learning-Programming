#include<stdio.h>

int main()
{
    int p,r,n,i;
    
    printf("Enter Principal:");
    scanf("%d",&p);
    printf("Enter rate:");
    scanf("%d",&r);
    printf("Enter number of years:");
    scanf("%d",&n);

    i = (p*r*n)/100;

    printf("Simple interest:%d\n",i);

    return 0;
}
