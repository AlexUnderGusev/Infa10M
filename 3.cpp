#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector <vector<int>>
ziggurat(vector <vector<int>> matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = min(min(i, j) + 1, min(n - i, n - j));
		}
	}

	return matrix;
}
int main() {
	int k; cin >> k;
	vector <vector<int>> arr(k, vector <int>(k));
	arr = ziggurat(arr, k);
	for (int i = 0; i < k; i++) 
	{
		for (int j = 0; j < k; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}