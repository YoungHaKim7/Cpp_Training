#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr = {1, 2, 3, 4, 5};
	for (auto &itr : arr)
		std::cout << itr << " ";
	std::cout << std::endl;

	std::cout << arr[1] << std::endl;
	std::cout << arr.at(1) << std::endl;

	return 0;
}
