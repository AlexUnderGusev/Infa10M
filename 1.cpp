#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool Find(vector<int> arr, int n)
{
	int counter = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (n == arr[i])counter++;
	}
	if (counter >= 2) return true;
	else return false;
}
vector<int> delete_elements(vector<int> arr, int n)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (Find(arr, arr[i]))
		{
			arr.erase(arr.begin() + (i--));
			arr.resize(arr.size() - 1);
		}
	}
	return arr;
}
int main() {
	int n; cin >> n;
	vector<int> array(n);
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	array = delete_elements(array, n);
	for (int q = 0; q < array.size(); q++)
	{
		cout << array[q] << " ";
	}
	return 0;
}