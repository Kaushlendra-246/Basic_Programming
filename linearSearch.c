#include<stdio.h>

//O(n)
int linearSearch(int arr[],int n,int t){
    for(int i=0; i<n; i++){
        if(arr[i] == t) return i;
    }
    return -1;
}

int main(){
    //No need that array is to be sorted
    int arr[] = {2,3,1,12,3,5,65,4,23,7,5,22,88,6,32,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    printf("Enter target element : ");
    scanf("%d",&target);


    int pos = linearSearch(arr,n,target);

    if(pos == -1) printf("%d is not present in the array\n",target);
    else printf("%d is present in the array at position %d\n",target,pos+1);
}