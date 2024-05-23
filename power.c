#include<stdio.h>
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter exponent : ");
    scanf("%d",&b);
    int expo = b;

    if(b >= 0){
        int power = 1;
        while(b != 0){
            power = power*a;
            b--;
        }
        printf("%d to the power %d is %d\n",a,expo,power);
    }
    else {
        float power = 1.0;
        while(b != 0){
            power = power*(1.0/a);
            b++;
        }
        printf("%d to the power %d is %f\n",a,expo,power);
    }
    return 0;
}