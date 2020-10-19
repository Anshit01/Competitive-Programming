#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	int n;
	int A, B;
	while (t--)
	{
		A = 0;
		B = 0;
		cin >> A >> B;
		int min, max;
		max = A + B;
		if (A > B)
		{
			min = A;
		}
		else
		{
			min = B;
		}

		cout << min << " " << max;
	}
}
