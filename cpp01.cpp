#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	cout << "Size : " << v.size() << endl;
	cout << "Capacity : " << v.capacity() << endl;
	cout << "Max-size : " << v.max_size() << endl;

	if (v.empty())
		cout << "Vector is empty\n";
	else
		cout << "Vector is not empty\n";
	return 0;
}