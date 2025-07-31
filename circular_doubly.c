#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

int main() {
    int ch;
    while (1) {
        printf("1 for push\n2 for pop\n3 for display\n4 for exit\n\n\n");
        puts("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Enter valid choice...\n");
        }
    }
    return 0;
}

void push() {
    int item;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) {
        printf("!!!......overFlow......!!!\n");
        return;
    }
    printf("Enter element you want to push : \n");
    scanf("%d", &item);
    newnode->data = item;

    if (head == NULL) {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
    } else {
        struct node *last = head->prev;

        newnode->next = head;
        newnode->prev = last;
        last->next = newnode;
        head->prev = newnode;
        head = newnode;
    }
}

void pop() {
    if (head == NULL) {
        printf("\n!!!......underFlow......!!!\n");
        return;
    }
    struct node *temp = head;

    if (head->next == head) {
        head = NULL;
    } else {
        struct node *last = head->prev;
        head = head->next;
        head->prev = last;
        last->next = head;
    }
    printf("\nthe popped item = %d\n\n", temp->data);
    free(temp);
}

void display() {
    if (head == NULL) {
        printf("\n\n!!!......the stack is empty......!!!\n\n");
        return;
    }
    struct node *temp = head;
    printf("=======\n");
    do {
        printf("%d\n", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("=======\n");
}
