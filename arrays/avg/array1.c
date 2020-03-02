#include <stdio.h>

int main()
{
 int avg,sum,x = 0;

 int arr[4];

 for (x=0;x<4; x++)
 {
  printf("Enter number %d:",(x+1));
  scanf("%d", &arr[x]);
 }
 
 for (x=0; x<4; x++)
 {
  sum = sum+arr[x];
 }
 
 avg = sum/4;
 printf("Average:%d\n", avg);
 return 0;
}
