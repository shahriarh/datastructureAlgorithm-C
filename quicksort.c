#include<stdio.h>

partision(int A[], int start, int end)
{
    int i,n;
    int pivot = A[end];
    int pindex = start;
    for(i=start; i<n;i++)
    {
        if(A[i]<=pivot)
        {
            int temp = A[i];
            A[i] = A[pindex];
            A[pindex] = temp;
            //swap (A[i],A[pindex]);
             pindex++;
        }
    }
    int temp = A[end];
    A[end] = A[pindex];
    A[pindex] = temp;
    //swap(A[pindex],A[end]);
    return pindex;
}
void quicksort(int A[], int start, int end)
{
    if(start<end)
    {
        int partisionIndex = partision(A,start,end);
         quicksort(A,start,partisionIndex-1);
         quicksort(A,partisionIndex+1,end);

    }
}

int main()
{
    int A[] = {28,1,4,3,23,90,11,2};
    quicksort(A,0,8);
    for(int i=0;i<8;i++)
        printf("%d ",A[i]);
}
