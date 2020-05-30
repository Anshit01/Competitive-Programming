#include <stdio.h>

int main(void) {
	int t = 0, a = 0, b = 0, res = 0;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &a);
	    scanf("%d", &b);
	    res = (a-1)*(b-1);
	    printf("%d\n", res);
	}
	return 0;
}

