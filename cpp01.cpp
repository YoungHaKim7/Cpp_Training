#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> a;
	int n, x;
	cout << "Please enter a number to convert. : ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	sort(a.begin(), a.end(), greater<int>());

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}