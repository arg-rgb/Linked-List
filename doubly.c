#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *fr_link;
    struct node *bk_link;
};

void push();
void pop();
void display();

struct node *head=NULL;
struct node *ptr = NULL;

int main(){
    int ch;
    while (1)
    {
        printf("1 for push\n2 for pop\n3 for display\n4 for exit");
        printf("enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Enter a valid choice...!!!");
        }
    }

    return 0;
}

void push(){
    struct node *newnode;
    int item;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Allocation failed...!!!");
        return;
    }
    printf("Enter item you want to push : ");
    scanf("%d",&item);
    newnode->data = item;
    newnode->bk_link = NULL;
    newnode->fr_link = head;
    if(head != NULL){
        head->bk_link = newnode;
    }
    head = newnode;
    printf("%d pushed onto the stack",item);

}
void pop(){
    if(head==NULL){
        printf("underFlow");
        return;
    }
    ptr = head;
    printf("the popped item is %d",ptr->data);
    head = head->fr_link;
    if(head != NULL){
        head->bk_link = NULL;
    }
    free(ptr);
}

void display(){
    ptr = head;
    if(head == NULL){
        printf("the stack is empty...Please push any element... click on 1\n\n");
        return;
    }
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->fr_link;
    }
}