
#include <stdio.h>
int main()
{
 int i, start, end, sum = 0;
 printf("Enter First Number: ");
 scanf ("%d", &start);
 printf("Enter Last Number: ");
 scanf ("%d", &end);
 
 for(i=start;i<=end;i++)
 {
  sum +=  i;
 }
 printf("%d\n", sum);
 return 0;
 
}
