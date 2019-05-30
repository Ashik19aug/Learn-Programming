#include<stdio.h>
#include<math.h>
#define size 10
void input();
void delet();
void output();
int queue[size],front=-1,rear=-1,element;

main()
{
    int ch;
    do
    {
        printf("\n1=Input.\n2=Delet\n3=Output\n4=exit.\n\n\n");
        printf("Enter your choice = ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            input();
            break;
        case 2:
            delet();
            break;
        case 3:
            output();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice try again.\n");
        }
    }
    while(1);
    getch();
}

void input()
{
    if((front==0&&rear==size-1)||(front==rear+1))
        printf("The queue is full.\n");
    else
    {
        printf("Input your number = ");
        scanf("%d",&element);
        if(rear==-1)
        {
            rear=0;
            front=0;
        }
        else if(rear==size-1)
            rear=0;
        else
        rear++;
            queue[rear]=element;
        printf("\ninserted element is = %d",element);
    }
}

void delet()
{
    if(front==-1)
        printf("The queue is empty.\n");
    else
    {
        element=queue[front];
        if(front==rear)
        {
            rear=0;
            front=0;
        }
        if(front==size-1)
            front=0;
        else
            front++;
        printf("\n%d is delete.\n",element);
    }
}

void output()
{
    int i;
    if((front==-1)||(front==rear+1))
        printf("the queue is empty.\n");
    else
    {
        for(i=front; i<=rear; i++)
            printf("\n%d\t",queue[i]);
    }
}
