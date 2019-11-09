#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool Prime(int n) {
	if (n == 0) return true;
	if (n == 1 || n == 2) return true;
	else
	{
		for (int i = 2; i <= sqrt(n); i++) 
		{
			if (n % i == 0)	return false;

		}
	}
	return true;
}
bool Find(vector <int> new_vec, int k)
{
	int counter = 0;
	for (int i = 0; i < new_vec.size(); i++)
	{
		if (new_vec[i] == k) ++counter;
	}
	if (counter >= 2) return true;
	return false;
}
vector <int> delete_elements(vector <int> array) {
	vector <int> array2 = array;
	for (int i = 0; i < array.size(); i++)
	{
		if (Prime(array[i]) && Find(array2, array[i]))
		{
			array.erase(array.begin() + (i--));
		}
	}
	return array;
}
int main() {
	int n; cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < arr.size(); i++) 
	{
		cin >> arr[i];
	}
	arr = delete_elements(arr);
	for (int& newarray : arr) 
	{
		cout << newarray << " ";
	}
	return 0;
}