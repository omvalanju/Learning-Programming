#include<stdio.h>

int main()
{
    float r,a,p;

    printf("Enter Radius:");
    scanf("%f",&r);

    a = 3.1415*(r*r);
    p = 2*3.1415*r;

    printf("Area:%f\nCircumference:%f",a,p);
}
