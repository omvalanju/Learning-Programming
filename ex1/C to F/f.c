#include <stdio.h>

int main()
{
    float c,f;

    printf("Enter Temp in Celsius:\n");
    scanf("%f", &c);
   
    f = (float)(c-32)*(float)(5/9);

    printf("%f",f);
    
    return 0;

}

