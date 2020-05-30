#include <stdio.h>
#include <string.h>

int main(){
    int n, ans = 0;
    scanf("%d", &n);
    char user[21];
    while(n--){
        scanf("%s", user);
        int l = strlen(user);
        for(int i = 0; i < l-1; i++){
            if(user[i] == 'c' && user[i+1] == 'h'){
                ans++;
                break;
            }
            else if(user[i] == 'h' && user[i+1] == 'e'){
                ans++;
                break;
            }
            else if(user[i] == 'e' && user[i+1] == 'f'){
                ans++;
                break;
            }
        }

    }
    printf("%d\n", ans);
}