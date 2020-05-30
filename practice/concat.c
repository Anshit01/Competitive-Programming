#include <stdio.h>

int main(){
    char str1[100], str2[100];
    scanf("%s%s", str1, str2);
    int i, j;
    for(i = 0; str1[i] != '\0'; i++){

    }
    for(j = 0; str2[j] != '\0'; j++){
        str1[i+j] = str2[j];
    }
    str1[i+j] = '\0';
    printf("%s", str1);
}