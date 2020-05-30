#include <stdio.h>
#include <string.h>

int main(){
    int t, words_len, phrases_len, k;
    char str[6];
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &words_len, &phrases_len);
        char words[100][6];
        int bool[100];
        for(int i = 0; i < 100; i++){
            bool[i] = 0;
        }
        for(int i = 0; i < words_len; i++){
            scanf("%s", words[i]);
        }
        for(int i = 0; i < phrases_len; i++){
            int k;
            scanf("%d", &k);
            for(int j = 0; j < k; j++){
                scanf("%s", str);
                for(int ii = 0; ii < words_len; ii++){
                    if(bool[ii] != 1 && strcmp(str, words[ii]) == 0){
                        bool[ii] = 1;
                        break;
                    }
                }
            }
        }
        printf((bool[0] == 1)? "YES" : "NO");
        for(int i = 1; i < words_len; i++){
            printf((bool[i] == 1)? " YES" : " NO");
        }
        printf("\n");

    }
}