#include<stdio.h>
#include<string.h>

int main()
{   
    int n,i,j,k,com; 
    char temp[10];   
    char str[][10]={
                    "Rohan",
                    "Aditya",
                    "Nikhil",
                    "Garima",
                    "Amruta",
                    "Yogesh",
                    "Vidhula",
                    "Shubham",
                    "Rutuja",
                    "Sudarshan",
                    "Sharukh",
                    "Nassab",
                    "Shabbir"
                    };
    
   n = sizeof(str)/10;   

   for (i=0;i<=n;i++)
   {
       for (j=0;j<=n-i-1;j++)
       { 
           com=strcmp(str[j],str[j+1]);
           if (com>0)
           {
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
           }
       }
    }
    printf("%d\n",com);
   
    for (k=0;k<=n;k++)
    {
        printf("%s\n",str[k]);
    }
    return 0; 
}
