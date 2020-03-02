#include <stdio.h>
#include <string.h>

char ch_name[100][100];
int number[100];
int salary[100];
int count = 0;

int add()
{

    int no,sal,op,j,k,y,z;
    
     printf("Enter Name:\n");
     scanf("%s",ch_name[count]);

     printf("Enter Number:\n");
     scanf("%d",&number[count]);

     printf("Enter Salary:\n");
     scanf("%d",&salary[count]);

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

        for(x=del-1;x<=count-1;x++);
        {   
            printf("%s",ch_name[x]);
            strcpy(ch_name[x],ch_name[x+1]);
            number[x]=number[x+1];
            salary[x]=salary[x+1];
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
                scanf("%s",ch_name[z]);
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


int main()
{   int op,j;
    
    for (;;)
    {
        printf("Select Operation:\n 1.Add\n2.Remove\n3.Update\nEnter Operation number:");

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
                    add();
                    break;
          
                case 2:
                    rmv();
                    break;
    
                case 3:
                    modify();
                    break;
             } 
             
             for(j=0;j<=count-1;j++)
             {    
                  printf("Name %d:%s\n",j+1,ch_name[j]);
                  printf("Number %d:%d\n",j+1,number[j]);
                  printf("Salary %d:%d\n",j+1,salary[j]);
                  printf("**************************\n");
              }
       
            
    }
}
