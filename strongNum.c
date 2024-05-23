#include<stdio.h>

int fact(int m){
    int ans = 1;
    for(int i=1; i<=m; i++){
        ans = ans*i;
    }
    return ans;
}

int strong(int a){
    int sum = 0;
    int rem;
    while(a != 0){
        rem = a%10;
        int n = fact(rem);
        sum = sum + n;
        a = a/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int res = strong(n);

    if(res == n) printf("%d is an Strong number\n",n);
    else printf("%d is not an Strong number\n",n);
    return 0;
}