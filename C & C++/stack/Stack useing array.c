//Md. Ashik Shafayet
//Computer science & engineering (SUST)

#include<stdio.h>
#define max 2

void push();
void pop();
void display();
int stack[max],top=-1,girls;
int main()
{
    int ch;
    do
    {
        printf("\n\n\n1=push\n2=pop\n3=display\n4=exit\nEnter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid entry. Please try again.\n");
        }
    }
    while(ch!=4);
    getch();
}

void push()
{
    if(top==max-1)
        printf("stack is full\n");
    else
    {
        printf("enter your number=");
        scanf("%d",&girls);
        top++;
        stack[top]=girls;
        printf("the number is =%d\n",girls);
    }
}

void pop()
{
    if(top==-1)
        printf("stack is empty\n");
    else
    {
        girls=stack[top];
        top--;
        printf("%d is delete\n",girls);
    }
}

void display()
{
    int i;
    if(top==-1)
        printf("stack is empty\n");
    else
    {
        printf("your number is = ");
        for(i=top; i>=0; i--)
            printf("%d\t",stack[i]);
    }
}
