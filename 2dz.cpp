#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string oborot(string str)
{
	string src = "";
	int j = str.length() - 1;
	while (j >= 0)
	{
		src += str[j];
		--j;
	}
	return src;
}

int main()
{
	int n;
	cin >> n;
	int l = pow(10, n / 2 - 1);
	if (n % 2 == 1)
	{
		for (int k = 0; k < 10; ++k)
		{
			while (l < pow(10, n / 2))
			{
				cout << l << k << oborot(to_string(l)) << endl;
				++l;
			}
			l = pow(10, n / 2 - 1);
		}
	}
	else
	{
		while (l < pow(10, n / 2))
		{
			cout << l << oborot(to_string(l)) << endl;
			++l;
		}
	}
	return 0;
}