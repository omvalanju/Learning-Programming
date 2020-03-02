#include <stdio.h>
#include <string.h>


int main()
{
    int no,sal,x,op,del,j,k,y,z;
    int count = 0;
    char nam [100];
    int number[100];
    int salary[100];

    for (;;)
    {
        printf("Select Operation:\n1.Add\n2.Remove\n3.Update\nEnter Operation number:");

        scanf("%d",&op);

        if (op>3)
        {
            printf("Invalid Operation");
            continue;
        }
        else
            switch(op)
            {
                case 1:
                    /* printf("Enter Name:\n");
                    scanf("%s",&name[count][]);*/

                    printf("Enter Number:\n");
                    scanf("%d",&number[count]);

                    printf("Enter Salary:\n");
                    scanf("%d",&salary[count]);

                    count = count + 1;
                    // printf("%d\n",count);

                    break;

                case 2:
                    printf("Enter Element number to delete:");
                    scanf("%d",&del);

                    if (del>count)
                         printf("Entry does not exist");

                     else

                       for(x=del-1;x<=count-1;x++);
                       {
                           // name[x]=name[x+1];
                           //strcpy(name[x],name[x+1]);
                           number[x]=number[x+1];
                           salary[x]=salary[x+1];
                        }

                        count = count - 1;

                    break;

                case 3:
                     printf("Select category to update:\n1.Name\n2.Number\n3.Salary\nEnter Category Number:");
                     scanf("%d",&x);
                     printf("Enter Element Number");
                     scanf("%d",&y);

                     if (y>count)
                         printf("Entry does not exist");

                     else
                         z = y - 1;
                         switch(x)
                         {
                             case 1:
                                 /* printf("Enter Name:");
                                 scanf("%s",&name[y][]);*/
                                 break;

                             case 2:
                                 printf("Enter Number:");
                                 scanf("%d",&number[z]);
                                 break;

                             case 3:
                                 printf("Enter Salary:");
                                 scanf("%d",&salary[z]);
                                 break;
                  
                         }
                }

             for(j=0;j<=count-1;j++)
             {
                  // printf("Name:%s\n",name[])
                  printf("Number %d:%d\n",j+1,number[j]);
                  // printf("%d\n",number[0]);
                  printf("Salary %d:%d\n",j+1,salary[j]);
              }


    }
}

