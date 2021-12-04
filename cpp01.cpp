#include <vector>
#include <iostream>

using namespace std;

void fillVector(vector<int> &);

void printVector(const vector<int> &);

int main()
{
	vector<int> myVector;

	fillVector(myVector);
	printVector(myVector);

	return 0;
}

void fillVector(vector<int> &newMyVector)
{
	cout << "TYpe in list of numbers ( -1 top stop): ";
	int input;
	cin >> input;

	while (input != -1)
	{
		newMyVector.push_back(input);
		cin >> input;
	}
	cout << endl;
}

void printVector(const vector<int> &newMyVector)
{

	cout << "Vector: ";

	for (unsigned int i = 0; i < newMyVector.size(); i++)
	{
		cout << newMyVector[i] << " ";
	}
}