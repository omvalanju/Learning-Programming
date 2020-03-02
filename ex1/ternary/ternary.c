#include <stdio.h>

int main()
{
    int x,y,z;
 
    printf("Enter Number 1:\n");
    scanf("%d",&x);
    printf("Enter Number 2:\n");
    scanf("%d",&y);

    z = x>y?x+y:x-y;
    
    printf("%d\n",z);
    
    return 0;
}
