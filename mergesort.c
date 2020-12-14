#include<stdio.h>

void devide(int A[], int start, int end)
{
    if(start>=end){
    return;
    }else{
        int mid = start = (end - start)/2;
        devide(A, start, mid);
        devide(A, mid+1, end);
        merge(A, start, mid, end);
    }

}
void merge(int A[], int start, int mid, int end)
{
    int i = start, j = mid+1, k = start;
    int B[10];
    while(i<=mid && j<=end ){
        if(A[i]<=A[j]){
            B[k] = A[i];
            i++;k++;
        }else{
            B[k] = A[j];
            j++;k++;
        }
    }
        if(i>mid){
            while(j<=end){
                B[k] = A[j];
                j++;k++;
            }
        }
        else{
            while(i<=mid){
                B[k] = A[i];
                i++;k++;
            }
        }
    for(k= start; k<end; k++)
    {
        A[k] = B[k];

    }

}

int main()
{
    int A[] = {28,1,4,3,23,90,11,2};
    int n = sizeof(A)/sizeof(A[0]);

    //merge(A,)
    devide(A,0,n);
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}
