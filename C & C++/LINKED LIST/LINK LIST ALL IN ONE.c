#include <stdio.h>

void insert_last();
void insert_specific();
void display();
void delete_last();
void delete_specific();
void delete_first();

struct node
{
    int info;
    struct node *link;
} *start=NULL;


int item;
int main()

{
    int ch;
    printf("1. Insert Last\n2. Insert Specific\n3. Display\n4.delete_last\n5.delete_specific\n6.delete_first\n7.Exit\n");
    do
    {

        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            insert_last();
            break;
        case 2:
            insert_specific();
            break;
        case 3:
            display();
            break;
        case 4:
            delete_last();
            break;
        /*case 5:
            delete_specific();
            break;*/
        case 6:
            delete_first();
            break;
        case 7:
            exit(0);
        default:
            printf("\n\nInvalid choice. Please try again. \n");
        }
    }
    while (1);
}


void insert_last()
{
    struct node *ptr;
    printf("\n\nEnter item: ");
    scanf("%d", &item);
    if(start == NULL)
    {
        start = (struct node *)malloc(sizeof(struct node));
        start->info = item;
        start->link = NULL;
    }
    else
    {
        ptr = start;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = (struct node *)malloc(sizeof(struct node));
        ptr = ptr->link;
        ptr->info = item;
        ptr->link = NULL;
    }
    printf("\nItem inserted: %d\n", item);
}



void insert_specific()
{
    int n;
    struct node *nw, *ptr;
    if (start == NULL)
        printf("\n\nLinked list is empty. It must have at least onenode. \n");
    else
    {
        printf("\n\nEnter INFO after which new node is to be inserted: ");
        scanf("%d", &n);
        printf("\n\nEnter ITEM: ");
        scanf("%d", &item);
        ptr = start;
        nw = start;
        while (ptr != NULL)
        {
            if (ptr->info == n)
            {
                nw = (struct node *)malloc(sizeof(struct node));
                nw->info = item;
                nw->link = ptr->link;
                ptr->link = nw;
                printf("\n\nItem inserted: %d", item);
                return;
            }
            else
                ptr = ptr->link;
        }
    }
}


void display()
{
    struct node *ptr = start;
    int i=1;
    if (ptr == NULL)
        printf("\nLinklist is empty. \n");
    else
    {
        printf("\nSr. No. \t\tAddress\t\tInfo\t\tLink\n");
        while(ptr != NULL)
        {
            printf("\n%d. \t\t%d\t\t%d\t\t%d\n", i, ptr, ptr->info,
                   ptr->link);
            ptr = ptr->link;
            i++;
        }
    }
}


void delete_first()
{
    struct node *ptr;
    if (start == NULL)
        printf("\n\nLinked list is empty. \n");
    else
    {
        ptr = start;
        item = start->info;
        start = start->link;
        free(ptr);
        printf("\n\nItem deleted: %d", item);
    }
}



/*void delete_specific()
{
    struct node *ptr, *prev;
    printf("\n\nEnter ITEM which is to be deleted: ");
    scanf("%d", &item);
    if (start == NULL)
        printf("\n\nLinked list is empty. \n");
    else if (start->info == item)
    {
        ptr = start;
        start = start->link;
        free(ptr);
    }
    else
    {
        ptr = start;
        prev = start;
        while (ptr != NULL)
        {
            if (ptr->info == item)
            {
                prev->link = ptr->link;
                free(ptr);
            }
            else
            {
                prev = ptr;
                ptr = ptr->link;
            }
        }
        printf("\n\nItem deleted: %d", item);
    }
}

*/

void delete_last()
{
    struct node *ptr, *prev;
    if (start == NULL)
        printf("\n\nLinked list is empty. \n");
    else
    {
        ptr = start;
        prev = start;
        while (ptr->link != NULL)
        {
            prev = ptr;
            ptr = ptr->link;
        }
        item = ptr->info;
        if (start->link == NULL)
            start = NULL;
        else
            prev->link = NULL;
        prev->link = NULL;
        free(ptr);
        printf("\n\nItem deleted: %d", item);
    }
}
