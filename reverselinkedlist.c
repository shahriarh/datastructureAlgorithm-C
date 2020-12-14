#include<stdio.h>
#include<stdlib.h>

struct Node *Linkedcreate(int arr[], int size);
void reverLineklist(struct Node *head);

struct Node{
    int data;
    struct Node *link;
};
int main()
{
    int a[] = {1,2,3,4,5,6};
    struct Node *head=NULL;
    head = Linkedcreate(a,6);

    struct Node *newhead = head;
    while(head != NULL){
        printf("%d ->",head->data);
        head = head->link;
    }
    printf("NULL\n");

    reverLineklist(newhead);

    return 0;

}

void reverLineklist(struct Node *head)
{
    struct Node *prev = NULL, *current=head, *next = NULL;
        while(current!=NULL){
            next = current->link;
            current->link = prev;
            prev = current;
            current = next;
        }
        head = prev;
        while(head != NULL){
        printf("%d ->",head->data);
        head = head->link;
    }
    printf("NULL\n");
}

struct Node *Linkedcreate(int arr[], int size)
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
