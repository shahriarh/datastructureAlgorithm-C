#include<stdio.h>
#include<stdlib.h>

struct Node *linkedlistCreate(int arr[], int size);
int searchfromLonkedlist(struct Node *head, int val);

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    struct Node *head;
    head = linkedlistCreate(a,7);
    printf("Index %d\n",searchfromLonkedlist(head,3));

    return 0;
}

int searchfromLonkedlist(struct Node *head, int val)
{
    int index = 1;
    while(head!=NULL){
        if(head->data == val){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}


struct Node *linkedlistCreate(int arr[], int size)
{
    struct Node *head, *temp, *current;
    int i;
    for(i=0;i<size;i++){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}
