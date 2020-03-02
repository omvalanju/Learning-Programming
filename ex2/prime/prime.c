#include <stdio.h>

int main()
{
    int i,j,flag;
      
    for(i=2;i<100;i++)
    {
        for(j=2;j<i;j++)
        {   
            if(i==2)
            {
                flag=0;
                break;
            }
            if(i%j==0)
            {
                flag=1;
                break;
            }
           
             else
             {
                flag = 0;
             }
        }
        
        if (flag==0)
        {
            printf("%d is a prime number\n",i);
        }
    }
    return 0;
}
