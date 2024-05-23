#include<stdio.h>
int main(){
    int n;
    printf("Enter Any Decimal number : ");
    scanf("%d",&n);

    int num = 0,rem,weight = 1;
    while(n != 0){
        rem = n%2;
        num = num + rem*weight;
        n = n/2;
        weight = weight*10;
    }

    printf("Binary Equivalent is : %d\n",num);
}