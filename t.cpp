#include <iostream>
#include <string.h>
using namespace std;

struct students{
    int rlnm;
    char name[25];
    char stream[25];
    int year;
};

int n;
void dispyr(struct students a[], int yr){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i].year == yr){
            count++;
        }
    }
    printf("%d\n", count);
    for(int i = 0; i < n; i++){
        if(a[i].year == yr){
            printf("%d\n%s\n%s\n%d\n", a[i].rlnm, a[i].name, a[i].stream, a[i].year);
        }
    }
}

int main(){
    
    
}