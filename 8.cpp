#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}
int propertyA(int n) {
	int i = 0;
	int counter = 0;
	while (i < n)
	{
		i++;
		if (gcd(i, n) == 1)
		{
			counter++;
		}
	}

	return 2 * counter;
}
int main() {
	int b; cin >> b;
	cout << propertyA(b);
	return 0;
}