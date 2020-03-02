#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct {
    char name[100];
    int number;
    int salary;

}e[10];

int count = 0;

int add(){

    //int no,sal,op,j,k,y,z;

     printf("Enter Name:\n");
     scanf("%s",e[count].name);

     printf("Enter Number:\n");
     scanf("%d",&e[count].number);

     printf("Enter Salary:\n");
     scanf("%d",&e[count].salary);

     count = count + 1;

}

int rmv()
{
    int del,x;
    printf("Enter Element number to delete:");
    scanf("%d",&del);

    if (del>count)
        printf("Entry does not exist");

    else

        for(x=del-1;x<=count-1;x++)
        {
            strcpy(e[x].name,e[x+1].name);
            e[x].number=e[x+1].number;
            e[x].salary=e[x+1].salary;
        }

         count = count - 1;

}

int modify()
{
    int x,y,z;

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
                printf("Enter Name:");
                scanf("%s",e[z].name);
                break;

            case 2:
                printf("Enter Number:");
                scanf("%d",&e[z].number);
                break;

            case 3:
                printf("Enter Salary:");
                scanf("%d",&e[z].salary);
                break;
        }
}

int main()
{   int op,j;

    for (;;)
    {
        printf("Select Operation:\n1.Add\n2.Remove\n3.Update\n4.Exit\nEnter Operation number:");
        
        scanf("%d",&op);
        printf("**************************\n");

        if (op>4)
        {
            printf("Invalid Operation");
            continue;
        }
        else
            switch(op)
            {
                case 1:
                    add();
                    break;

                case 2:
                    rmv();
                    break;

                case 3:
                    modify();
                    break;
                
                case 4:
                    exit(0);
             }

             for(j=0;j<=count-1;j++)
             {
                  printf("**************************\n");
                  printf("Name %d:%s\n",j+1,e[j].name);
                  printf("Number %d:%d\n",j+1,e[j].number);
                  printf("Salary %d:%d\n",j+1,e[j].salary);
                  printf("**************************\n");
              }


    }
}

