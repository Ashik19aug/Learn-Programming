///number insert and diplay
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

struct node
{
    int value;
    node *next;
};

struct linkedlist
{
    node *HEAD;
    linkedlist();
    void insertAtBegin( int data );
    void display();
};

linkedlist::linkedlist()
{
    node *init = new node;
    init->next = NULL;
    HEAD = init;
}

void linkedlist::insertAtBegin( int data )
{
    node *tmp = new node;
    tmp->value = data;
    tmp->next = HEAD;
    HEAD = tmp;
}

void linkedlist::display()
{
    node *display_tmp = HEAD;
    if( display_tmp->next == NULL )
    {
        printf("SORRY NO ELEMENT INSERTED\n");
        return;
    }
    while( display_tmp->next != NULL )
    {
        printf("%d ", display_tmp->value);
        display_tmp = display_tmp->next;
    }
    printf("\n");
}

int main()
{
    int n, num, i, j;
    char str[100];
    linkedlist lnkl;

    while( scanf("%s", str) == 1 )
    {
        if( strcmp( str, "insert" ) == 0 )
        {
            scanf("%d", &num);
            lnkl.insertAtBegin( num );
        }
        else if( strcmp( str, "display" ) == 0 )
        {
            lnkl.display();
        }
    }
    lnkl.display();

    return 0;
}
