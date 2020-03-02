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
 if (str[index] == 'a')
    {
     sum += 1;
    }
 else if (str[index] == 'e')
    {
     sum += 1;
    }
 else if (str[index] == 'i')
    {
     sum += 1;
    }
 else if (str[index] == 'o')
    {
     sum += 1;
    }
 else if (str[index] == 'u')
    {
     sum += 1;
    }
 else if (str[index] == 'A')
    {
     sum += 1;
    }
 else if (str[index] == 'E')
    {
     sum += 1;
    }
 else if (str[index] == 'I')
    {
     sum += 1;
    }
 else if (str[index] == 'O')
    {
     sum += 1;
    }
 else if (str[index] == 'U')
    {
     sum += 1;
    }
 else
     sum = sum;
 }
 printf("%d\n", sum);
 return 0;
}

