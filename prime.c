#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int a = ceil(sqrt(n));
    
    int count = 0;
    for(int i=2; i<=a; i++){
        if(n%i == 0) count = 1;
    }

    if((count == 0 && n != 1) || (n == 2) || (n == 3)){
        printf("%d is a prime number\n",n);
    }
    else printf("%d is not a prime number\n",n);
}