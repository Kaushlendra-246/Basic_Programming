#include<stdio.h>

int power(int m,int n){
    int ans = 1;
    while(n != 0){
        ans = ans*m;
        n--;
    }
    return ans;
}

int armstrong(int a,int b){
    int sum = 0;
    int rem;
    while(a != 0){
        rem = a%10;
        int n = power(rem,b);
        sum = sum + n;
        a = a/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int count = 0;
    int a = n;
    while(a != 0){
        a = a/10;
        count++;
    }

    int res = armstrong(n,count);

    if(res == n) printf("%d is an Armstrong number\n",n);
    else printf("%d is not an Armstrong number\n",n);
    return 0;
}