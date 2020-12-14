#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int que[CAPACITY];

int front = 0,rear = -1, totalitem = 0;

bool isFull()
{
    if(totalitem == CAPACITY)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if(totalitem==0)
    {
        return true;
    }
    return false;
}


void enque(int item)
{
    if(isFull()){
        printf("Sorry, the que is full\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    que[rear] = item;
    totalitem++;
}
int deque()
{
    if(isEmpty()){
        printf("Sorry, the queue is empty");
        return -1;
    }
    int frontitem = que[front];
    que[front] = -1;
    front = (front + 1) % CAPACITY;
    totalitem--;

    return frontitem;
}

void printque()
{
    printf("Queue: ");
    for(int i=0;i<CAPACITY;i++){
    printf("%d ",que[i]);
    }
    printf("\n");
}

int main()
{

    printf("Implementing que in C \n");
    enque(10);
    printque();
    enque(20);
    printque();
     enque(30);
     printque();
     enque(40);
     printque();
     enque(50);
     printque();
     printf("Dequeue: %d\n", deque());
     enque(60);
    printque();
    return 0;
}

