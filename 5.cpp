#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> put_snake(vector<vector<int>> arr)
{
	int k = 3;
	int right = arr[0].size() - 1;
	int left = 0;
	int up = 0;
	int down = arr.size() - 1;
	int i = 0;
	int j = arr[0].size() - 1;
	for (int q = 1; q <= arr.size() * arr[0].size(); q++)
	{
		arr[i][j] = q;
		if (k == 3)
		{
			j--;
			if (j < left)
			{
				k = 2;
				j = left;
				i++;
				up++;
			}
		}
		else if (k == 2)
		{
			i++;
			if (i > down)
			{
				k = 1;
				i = down;
				j++;
				left++;
			}
		}
		else if (k == 1)
		{
			j++;
			if (j > right)
			{
				k = 0;
				j = right;
				i--;
				down--;
			}
		}
		else if (k == 0)
		{
			i--;
			if (i < up)
			{
				k = 3;
				i = up;
				j--;
				right--;
			}
		}
	}
	return arr;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>> zmeya(n, vector<int>(k));
	zmeya = put_snake(zmeya);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << zmeya[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
