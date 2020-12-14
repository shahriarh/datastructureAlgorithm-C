#include<stdio.h>
void insertSort(int A[], int n)
{
    int i,j, item;

    for(i=1;i<n;i++){
        item = A[i];
        j = i-1;
        while(j>=0 && A[j]>item){
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = item;

    }
}

int main()
{
    int A[] = {28,1,4,3,23,90,11,2};
    insertSort(A,8);
    for(int i=0;i<8;i++)
        printf("%d ",A[i]);
}
