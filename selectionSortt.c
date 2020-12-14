#include<stdio.h>

void selectionSort(int A[], int n)
{
    for(int i=0;i<n;i++){
        int imin = i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[imin])
                imin = j;
        }
    int temp = A[i];
    A[i] = A[imin];
    A[imin] = temp;

    }
}

int main()
{
    int A[] = {28,1,4,3,23,90,11,2};
    selectionSort(A,8);
    for(int i=0;i<8;i++)
        printf("%d ",A[i]);
}
