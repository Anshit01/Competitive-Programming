#include <stdio.h>
#define SIZE 1000
int Stack[1000], top = -1;

void push(char c){
    if(top < SIZE){
        top++;
        Stack[top] = c;
    }
}

char pop(){
    if(top != -1){
        return Stack[top--];
    }
}

int main(){
    char str[100];
    scanf("%s", str);
    int i = 0;
    while(str[i] != '\0'){
        push(str[i]);
        i++;
    }
    i = 0;
    while(str[i] != '\0'){
        str[i] = pop();
        i++;
    }
    printf("%s", str);
}