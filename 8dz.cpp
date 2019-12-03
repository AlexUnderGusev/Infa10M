#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long int n, k = 1;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n + 1; ++i)
		arr.push_back(i);
	for (int p = 2; p < n + 1; ++p)
	{
		if (arr[p] != 0)
		{
			k *= arr[p];
			for (int j = p * p; j < n + 1; j += p)
				arr[j] = 0;
		}
	}
	cout << k;
	return 0;
}