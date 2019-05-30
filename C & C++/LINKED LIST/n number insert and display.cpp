///n number insert and display
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

struct node{
    int value;
    node *next;
};

struct linkedlist{
    node *HEAD;
    linkedlist();
    void insertAtBegin( int data );
    void display();
};

linkedlist::linkedlist(){
    node *init = new node;
    init->next = NULL;
    HEAD = init;
}

void linkedlist::insertAtBegin( int data ){
    node *tmp = new node;
    tmp->value = data;
    tmp->next = HEAD;
    HEAD = tmp;
}

void linkedlist::display(){
    if( HEAD->next == NULL ){
        printf("SORRY NO ELEMENT INSERTED\n");
        return;
    }
    while( HEAD->next != NULL ){
        printf("%d ", HEAD->value);
        HEAD = HEAD->next;
    }
    printf("\n");
}

int main(){
    int n, num, i, j;
    linkedlist lnkl;
    scanf("%d", &n);

    while( n-- ){
        scanf("%d", &num);
        lnkl.insertAtBegin( num );
    }
    lnkl.display();

    return 0;
}
