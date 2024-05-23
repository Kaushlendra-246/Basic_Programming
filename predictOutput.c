#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%s",str);
    str[5] = '\0';
    puts(str);
    printf("%s",str);
}