#include <iostream>
#include <vector>
using namespace std;


void NP(vector<int> arr, int k)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		int hp = 1;
		for (int j = 0; j < to_string(arr[i]); ++j)
		{
			if (arr[j] != '0')
				hp *= int(arr[j]) - 48;
		}
		if (hp > k)
			cout << arr[i];
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	int k;
	cin >> k;
	NP(arr, k);
	return 0;
}