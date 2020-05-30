#include <stdio.h>
int modMax;

void swap(int arr[],int a,int b)
{
	arr[a] = arr[a] + arr[b] - (arr[b] = arr[a]);
}

void checkMod(int arr[],int n)
{
	int mod = arr[0];
	//printf("%d ", arr[0]);
	for(int i = 1; i < n; i++)
	{
		mod %= arr[i];
		//printf("%d ", arr[i]);
	}
	//printf("\n");
	if(mod > modMax)
	{
		modMax = mod;
	}
	
}

void permute(int arr[],int n ,int c)
{
	if(c == n - 2){
		swap(arr, c, c+1);
		checkMod(arr, n);
	}
	else
	{
		permute(arr, n, c + 1);
		for(int i = 0; i < n - c- 1;i++)
		{
			swap(arr, c, c+1);
			checkMod(arr, n);
			permute(arr, n, c+1);
		}
	}

	

}

int main()
{
	int t = 0, n = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		checkMod(arr, n);
		permute(arr, n, 0);
		printf("%d\n", modMax);
	}
}