/* containers */

#include "easyfind.hpp"

int main(void) {
	// std::vector<int> arr = {2, 3, 4, 6};
	std::array<int, 4> arr = {2, 3, 5, 4};
	std::array<int, 4>::iterator it;
	try
	{
		it = easyfind(arr, 3);
		// std::cout << *it << std::endl;
		// ++it;
		// std::cout << *it << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	// ++it;
	// std::cout << *it << std::endl;
}