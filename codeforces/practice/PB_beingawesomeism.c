#include <stdio.h>

int main(){
    int t, r, c, a1, a2, a3, a4, flag;
    char world[60][60];
    scanf("%d", &t);
    while(t--){
        a1 = a2 = a3 = a4 = 0;
        scanf("%d%d", &r, &c);
        for(int i = 0; i < r; i++){
            scanf("%s", world[i]);
        }
        flag = 1;
        for(int i = 0; i < r; i++){
            if(world[i][0] != 'A'){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            a1 = 1;
        }
        flag = 1;
        for(int i = 0; i < r; i++){
            if(world[i][r-1] != 'A'){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            a1 = 1;
        }
        flag = 1;
        for(int i = 0; i < c; i++){
            if(world[0][i] != 'A'){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            a1 = 1;
        }
        flag = 1;
        for(int i = 0; i < c; i++){
            if(world[c-1][i] != 'A'){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            a1 = 1;
        }


        if(a1 == 0){
            for(int i = 1; i < r-1; i++){
                flag = 1;
                for(int j = 0; j < c; j++){
                    if(world[i][j] != 'A'){
                        flag == 0;
                    }
                }
                if(flag == 1){
                    a2 == 1;
                    break;
                }
            }
            for(int i = 1; i < c-1; i++){
                flag = 1;
                for(int j = 0; j < r; j++){
                    if(world[j][i] != 'A'){
                        flag == 0;
                    }
                }
                if(flag == 1){
                    a2 == 1;
                    break;
                }
            }
            if(world[0][0] == 'A' || world[r-1][c-1] == 'A' || world[r-1][0] == 'A' || world[0][c-1] == 'A'){
                a2 = 1;
            }


            if(a2 == 0){
                for(int i = 0; i < c; i++){
                    if(world[0][i] == 'A'){
                        a3 = 1;
                        break;
                    }
                }
                for(int i = 0; i < c; i++){
                    if(world[r-1][i] == 'A'){
                        a3 = 1;
                        break;
                    }
                }
                for(int i = 0; i < r; i++){
                    if(world[i][0] == 'A'){
                        a3 = 1;
                        break;
                    }
                }
                for(int i = 0; i < r; i++){
                    if(world[i][c-1] == 'A'){
                        a3 = 1;
                        break;
                    }
                }


                if(a3 == 0){
                    for(int i = 1; i < r; i++){
                        for(int j = 1; j < c; j++){
                            if(world[i][j] == 'A'){
                                a4 = 1;
                                break;
                            }
                        }
                    }
                }
            }
        }
        printf((a1 == 1)? "1" : (a2 == 1)? "2" : (a3 == 1)? "3" : (a4 == 1)? "4" : "MORTAL");
        printf("\n");
        
    }
}