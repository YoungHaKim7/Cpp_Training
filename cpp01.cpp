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

	myVector.insert(myVector.begin() + 3, 5);

	cout << "\nVector: ";

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}

	myVector.erase(myVector.begin() + 4);

	cout << "\nVector: ";

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}

	if (myVector.empty())
	{
		cout << endl
			 << "Is Empty!";
	}
	else
	{
		cout << endl
			 << "Is Not Empty";
	}

	cout << endl;

	return 0;
}