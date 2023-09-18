#include<stdio.h>

// Creating functions

void indian();
void french();

void main(){
    char ch;
    printf("I for Indian and F for French.\n");
    printf("Enter a language: \n");
    scanf("%c", &ch);
    if(ch=='i'){
        indian();
    }
    else if(ch == 'f'){
        french();
    }
    else{
        printf("Indian or French input only!\n");
    }
}

void indian(){
    printf("Namaste!\n");
}

void french(){
    printf("Bonjour!\n");
}