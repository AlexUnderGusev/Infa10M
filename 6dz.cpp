#include <iostream>
#include <set>
#include <vector>
//алгоритм эффективный,так как мы вводим и выводим числа в 1 цикле,т.е. при вводе 
//мы сразу определяем нужный элемент и ненужный
using namespace std;
int SUM = 0;
void FindTroiki(int n, int r)
{
	int temp = n;
	int counter = 0;
	while (temp > 0)
	{

		if (temp % 3 == 2)
			counter++;
		temp /= 3;
	}
	SUM += counter;
	if (counter < r)
		cout <<"number of array: "<<n<<endl;
}
int main()
{
	int r; cin >> r;
	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "enter the element: ";
		cin >> arr[i];
		FindTroiki(arr[i], r);
	}
	cout <<"number of twos: "<< SUM;
	return 0;
}