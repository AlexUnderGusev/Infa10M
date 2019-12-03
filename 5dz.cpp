#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool FindVector(int start, vector<int>arr, int n)
{
	for (int i = start + 1; i < arr.size(); ++i)
		if (arr[i] == n)
			return true;
	return false;
}

bool DelimosTwo(vector<int> arr, int n)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if (n % arr[i] == 0)
			if (FindVector(0, arr, n / arr[i]))
				return true;
	}
	return false;
}

int main()
{
	vector<int> just;
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n + 3; ++i)
		arr.push_back(i);
	for (int i = 2; i < n + 3; ++i)
	{
		if (arr[i] != 0)
		{
			just.push_back(arr[i]);
			for (int j = i * i; j < n + 3; j += i)
				arr[j] = 0;
		}
	}
	for (int i = 0; i < just.size(); ++i)
	{
		if (FindVector(i, just, just[i] + 2))
			cout << just[i] << endl;
		else if (DelimosTwo(just, arr[i]))
			cout << just[i] << endl;
	}
	return 0;
}