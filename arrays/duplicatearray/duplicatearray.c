#include <stdio.h>

int main()
{
 int arr1[10] = {1,1,1,1,1,1,1,1,1,1};
 int arr2[10];
 int sum = 0;
 int i,j,k;

 for (i=0; i<10; i++)
 {
  arr1[i] = arr2[i];
 }
 
 for(k=0; k<10; k++)
 {
  for(j=0; j<10; j++)
  { 
   if (arr1[k] == arr2[j])
   {
    sum += 1;
   }
   else
     sum = sum;
  }
 }
 printf("%d\n",sum);
 return 0;
}


