#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	cout << "Size : " << v.size() << endl;
	cout << "Last element : " << v.back() << endl;
	cout << "Element at 3rd index :" << v.at(3) << endl;

	return 0;
}