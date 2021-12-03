#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	int high;
	int low;
	int counter = 0;

	while (number != -99)
	{
		cout << " Please enter whole numbers. Enter -99 to quit entering \n ->  ";
		cin >> number;

		if (counter == 0)
		{
			high = number;
			low = number;
		}
		else
		{
			if (number > high && number != -99)
				high = number;
			else if (number < low && number != -99)
				low = number;
		}
		counter++;
	}
	cout << " The highest number you entered was " << high << endl;
	cout << " The lowerst number you entered was " << low << endl;
}
