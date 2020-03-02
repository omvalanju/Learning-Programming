#include <stdio.h>

int main()
{
 int i,n;
 printf("Enter range: ");
 scanf("%d", &n);
 printf("Numbers");
 
 for(i=1;i <= n;i++)
 {
  if (i%2 == 0)
  {
    printf("%d\n",i);
  }
 }
 return 0;
}
   
