#include<stdio.h>
#define max 5//100
void insert();
void delete();
void display();
int num,last=-1,fast=-1,queue[max];

int main()
{
    int ch;
    do
    {
        int ch;
        printf("1=insert. \n2=delet. \n3=display. \n4=exit. \nEnter your choice = ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default :
            printf("you input wrong number\n");
        }
    }
    while(ch!=4);
    getch();
}
void insert()
{
    if(fast==max-1)
    {
        printf("the queue is full\n");
        return;
    }

    else
    {
        printf("\n Enter the number =");
        scanf("%d",&num);
        if(last==-1||fast==-1)
        {
            last=0;
            fast=0;
        }
        else
            last++;
        queue[last]=num;
        printf("the inpurt number is = %d\n\n\n",num);

    }
}
void delete()
{
    if(last==-1)
    {
        printf("the queue is empty\n");
        return;
    }
    else
    {
        num=queue[fast];
        if(fast==last)
        {
            last=-1;
            fast=-1;
        }
        else

            fast++;
        printf("the delete num is = %d\n\n\n",num);

    }
}

void display()
{
    int i;
    if(fast==-1)
    {
        printf("queue is empty\n\n");
        return;
    }
    else
    {
        for(i=fast; i<=last; i++)
            printf("%d\t",queue[i]);
    }
    printf("\n\n\n");
}
