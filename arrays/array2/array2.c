#include <stdio.h>


int main()
{
 int arr[10];
 int i;
 
 for (i=0; i<10; i++)
 {
  printf ("Enter Number:");
  scanf ("%d", &arr[i]);
 }

 for (i=0; i<10; i++)
 {
  printf ("%d ", arr[i]);
 }
 return 0;
}
