#include<stdio.h>
int main(){
    int n;
    printf("Enter Any Binary number : ");
    scanf("%d",&n);

    int num = 0,rem,weight = 1;
    while(n != 0){
        rem = n%10;
        num = num + rem*weight;
        n = n/10;
        weight = weight*2;
    }

    printf("Decimal Equivalent is : %d\n",num);
}