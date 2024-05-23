#include<stdio.h>

void preInPost(int n){
    if(n == 0) return;
    printf("pre->%d\n",n);
    preInPost(n-1);
    printf("In->%d\n",n);
    preInPost(n-1);
    printf("Post->%d\n",n);
}

int main(){
    int n;
    printf("Enter a positive number : ");
    scanf("%d",&n);
    preInPost(n);
}