#include <stdio.h>
#include <string.h>

int main(){
    int t = 0, l, ques_count, diff;
    char s1[101], s2[101];
    scanf("%d", &t);
    while(t--){
        ques_count = 0;
        l = 0;
        diff = 0;
        scanf("%s%s", s1, s2);
        l = strlen(s1);
        for(int i = 0; i < l; i++){
            if(s1[i] == '?' || s2[i] == '?'){
                ques_count++;
            }
            else if(s1[i] != s2[i]){
                diff++;
            }
        }
        printf("%d %d\n", diff, diff + ques_count);
    }
}