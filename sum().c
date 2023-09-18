#include<stdio.h>

int sum(int a, int b);

void main(){
    int a,b,s;
    printf("Enter two numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    s = sum(a,b);
    printf("%d",s);
}

int sum(int a, int b){
    int add;
    add = a+b;
    return add;
}