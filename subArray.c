#include<stdio.h>

int** fun(int arr[]){
    int brr[4][2];
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            brr[i][j] = arr[i+j];
        }
    }

    return brr;
}

int main(){
    int arr[] = {2,4,8,0,5,3,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int brr[4][2] = fun(arr);

    printf("SubArray : ");
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
        printf("%d ",brr[i][j]);
        }
    }
    printf("\n");
}