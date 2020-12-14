#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if(top<CAPACITY-1)
    {
        top = top+1;
        stack[top] = x;
        printf("Successfully added %d\n",x);
    }else{
        printf("Exception! No Space!\n");
    }

}
int peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    printf("Exception from peek! Empty stack\n");
    return -1;
}
int pop()
{
    if(top>=0)
    {
        int val = stack[top];
        top = top-1;
        return val;
    }
     printf("Exception from pop! Empty stack\n");
    return -1;
}

int main()
{
    printf("Implementing stack in C\n");
    peek();
    pop();
    push(10);
    push(20);
    printf("Pop item %d from stack\n",pop());
    push(30);
    printf("Pop item %d from stack\n",pop());
    printf("Top of stack %d\n",peek());
    push(40);
    printf("Pop item %d from stack\n",pop());
    printf("Top of stack %d\n",peek());
    push(50);
     printf("Top of stack %d\n",peek());
    push(60);
     printf("Top of stack %d\n",peek());


    return 0;
}
