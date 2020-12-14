#include<stdio.h>
#include<stdlib.h>

struct Node *linkedlistCreate(int arr[], int size);
void insertatBegining(struct Node *head, int val);
void print(struct Node *head);

struct Node{
    int data;
    struct Node *link;
};

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    struct Node *head=NULL;
    head = linkedlistCreate(a,7);
    print(head);

    insertatBegining(head, 900);
    print(head);
    return 0;
}
void print(struct Node *head){
    struct Node *current;
    //temp = head;
    while(current!=NULL){
        printf("%d ->", current->data);
        current = current->link;
    }
    printf("NULL\n");

}

void insertatBegining(struct Node *head, int val)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->link = head;

    struct Node *newHead = temp;
    struct Node *current = temp;
    void print(newHead);

}

struct Node *linkedlistCreate(int arr[], int size)
{
    struct Node *head, *temp, *current;
    int i;
    for(i=0;i<size;i++){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->link = NULL;
        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current->link = temp;
            current = current->link;
        }
    }
    return head;
}
