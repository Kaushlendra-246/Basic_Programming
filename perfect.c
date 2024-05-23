#include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int sum =0;
    for(int i=1; i<=n/2; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    if(n==sum){
        printf("Number is a perfect number\n");
    }
    else{
        printf("Number is not a perfect number\n");
    }
    return 0;
}