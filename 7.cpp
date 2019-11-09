#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int sum(int a, int b)
{
	int summ = 0;
	int i = 0;
	while (i < min(a, b))
	{
		summ += max(a, b);
		i++;
	}
	return summ;
}
int main() 
{
	int a, b; cin >> a >> b;
	cout << sum(a, b);
	return 0;
}