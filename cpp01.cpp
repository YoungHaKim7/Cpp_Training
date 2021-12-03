#include <iostream>
#include <vector>

int main()
{
	std::vector<int> array;

	std::vector<int> array2 = {1, 2, 3, 4, 5};

	std::cout << array2.size() << std::endl;

	std::vector<int> array3 = {1, 2, 3};

	std::cout << array3.size() << std::endl;

	return 0;
}
