#include<stdio.h>

//O(lon(n))
int binarySearch(int arr[], int n, int t){
    int i=0,j=n-1;
    while(i<j){
        int mid = (i+j)/2;
        if(arr[mid] == t) return mid;
        else if(arr[mid] > t) j = mid-1;
        else i = mid+1; 
    }
    return -1;
}

int main(){
    //Array must be sorted
    int arr[] = {1,3,4,6,7,9,11,13,16,18};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    printf("Enter target element : ");
    scanf("%d",&target);

    int n = binarySearch(arr, size, target);

    if(n == -1) printf("%d is not present in the array\n",target);
    else printf("%d is present in the array at position %d\n",target,n+1);
}