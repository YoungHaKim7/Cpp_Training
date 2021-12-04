#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> myVector;

	myVector.push_back(3);
	myVector.push_back(7);
	myVector.push_back(4);
	myVector.push_back(12);
	myVector.push_back(9);

	cout << "Vector: ";

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}

	myVector.insert(myVector.begin(), 5);

	cout << "Vector: ";

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}

	cout << endl;

	return 0;
}