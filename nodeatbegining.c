#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
    struct Node* head;

    void Insert(int x)
    {
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        //struct Node *temp = (struct Node *) malloc(sizeof(struct Node));


        temp->data = x;
        temp->next = head;
        head = temp;
    }

    void print()
    {
        struct Node* temp = head;
        printf("List is: ");
        while(temp != NULL){
          //while(t->link != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
int main()
{
    head = NULL;
    printf("How many numbers?\n");
    int i,n,x;
    scanf("%d",&n);
    for(i=0; i<n;i++){
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x);
        print();
    }
}
