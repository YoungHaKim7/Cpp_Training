#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<string> list;

	cout << "Please enter the names, press Q to quit: " << endl;

	string name = "x";

	while (name != "Q")
	{
		cin >> name;
		list.push_back(name);
	}

	cout << "You have entered " << list.size() << " names: " << endl;

	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << endl;
	}

	return 0;
}

// .push_back()
// .pop_back()