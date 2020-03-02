#include <stdio.h>

int main()
{
    int x;
    printf("Enter a 5 Digit Number:");
    scanf("%d",&x);
    
    if (x > 99999 || x < 10000)
    {
        printf("Not a 5 Digit Number\n");
    }

    else
    {
        printf("Remainder:%d\n",x%3);
    }
    
    return 0;
}
