#include<stdio.h>

void insertionSort(int A[], int n)
{
    int i,j,item;
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
    int A[] = {12,3,1,2,78,98,34,56,32};
    int n = sizeof(A)/sizeof(A[0]);

       insertionSort(A,n);
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}
