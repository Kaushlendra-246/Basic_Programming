#include<stdio.h>
int main(){
    int a, b;
    printf("Enter number : ");
    scanf("%d %d",&a,&b);
    int sum,carry;
    while(b != 0){
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf("Sum of Numbers is %d\n",a);
    return 0;
}