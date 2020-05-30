#include <stdio.h>

int main()
{
	int n, a;
	long long product = 1;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		product *= a;
		product %= 1000000007;
	}
	printf("%d\n", product);
}