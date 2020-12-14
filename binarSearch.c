#include<stdio.h>

int binarySearch(int A[],int n, int x)
{
    int left,right,mid;
    left = 0;
    right = n-1;

    while(left<=right)
    {
        mid = left+ (right - left)/2;
        if(A[mid] == x){
            return mid;
        }
        if(A[mid]<x){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;

}

int main()
{
    int A[] = {2,4,5,13,13,13,34,35,50};
    printf("Enter a number ");
    //int n; //=(sizeof A[]/A[0]);
    int x;
    scanf("%d",&x);
    int index = binarySearch(A,9,x);

    if(index !=-1) printf("Number %d is at index %d", x, index);
    else printf("Number %d not found ",x);


}
