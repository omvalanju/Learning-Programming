#include <stdio.h>

int main()
{
     int marks[5];
     int i;
     float sum=0;
     float p;

     for(i=0;i<5;i++)
     {
         printf("Enter subject%d marks out of 100:",i+1);
         scanf("%d",&marks[i]);
     }
     
     for(i=0;i<5;i++)
     {
         sum = sum +  marks[i];
     }
     printf("%f\n",sum);

     p = (sum/500)*100;

     printf("Percentage:%f",p);

     return 0;
}    

