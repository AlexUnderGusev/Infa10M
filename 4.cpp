#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <vector<int>>
second_ziggurat(vector <vector<int>> matrix, int n) {
	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			matrix[j][k] = abs(j - k);
		}
	}
	return matrix;
}
int main() {
	int k; cin >> k;
	vector <vector<int>> arr(k, vector <int>(k));
	arr = second_ziggurat(arr, k);
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