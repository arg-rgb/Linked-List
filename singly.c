#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node{
    int data;
    struct node *link;
};

struct node *head;
struct node *ptr;
int main(){
    int ch;
    while (1)
    {
        printf("1 for push\n2 for pop\n3 for display\n4 for exit\n\n\n");
    puts("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch){
        case 1: push(); break;

        case 2: pop(); break;

        case 3: display(); break;

        case 4: exit(0);

        default: printf("Enter valid choice...\n");
    }
    }
    
    return 0;
}


void push(){
    int item;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("!!!......overFlow......!!!");
        return;
    }
    printf("Enter element you want to push : \n");
    scanf("%d",&item);
    newnode->link = head;
    newnode->data = item;
    head = newnode;
}

void pop(){
    ptr=NULL;
    ptr = head;
    if(head==NULL){
        printf("\n!!!......underFlow......!!!\n");
        return;
    }
    head = head->link;
    printf("\nthe popped item = %d\n\n",ptr->data);
    ptr->link = NULL;
}

void display(){
    ptr = head;
    if(ptr == NULL){
        printf("\n\n!!!......the stack is empty......!!!\n\n");
        return;
    }
    printf("=======\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
    printf("=======\n");
}