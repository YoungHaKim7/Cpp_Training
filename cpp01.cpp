#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr = {1, 2, 3, 4, 5};
	for (auto &itr : arr)
		std::cout << itr << " ";
	std::cout << std::endl;

	return 0;
}
