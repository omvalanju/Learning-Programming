#include <stdio.h>
#include <string.h>

int main()
{
     int sum,index,length = 0;
     printf("Enter String:");
     char str[30];
     scanf("%[^\n]%*c", str);
     length = strlen(str);
 
     for(index=0;index < length; index++)
     {
          switch(str[index])
          {
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':
               case 'A':
               case 'E':
               case 'I':
               case 'O':
               case 'U':
                   sum += 1;
                   break;
               default:
                   sum = sum;
          }
     }
      printf("%d\n", sum);
      return 0;
}

