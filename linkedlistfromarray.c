#include<stdio.h>
#include<stdlib.h>

struct Node *createLinkedlist(int arr[], int size);
int searchLinkedlist(struct Node *head, int value);

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    int a[]= {3,5,7,8,9,10,22,11};
    struct Node *head;
    head =createLinkedlist(a,8);
    while(head !=NULL){
        printf("%d ->",head->data);
        head = head->next;
    }
    //printf("Index %d\n", searchLinkedlist(head, 11));
    printf("NULL\n");
    return 0;
}

int searchLinkedlist(struct Node *head, int value)
{
    int index =1;
    while(head != NULL){
        if(head->data==value){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

struct Node *createLinkedlist(int arr[], int size){
    struct Node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for(i=0;i<size;i++){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];// coping from array
        temp->next = NULL;
        if(head ==NULL){
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current=current->next;
        }
    }
    return head;

}

