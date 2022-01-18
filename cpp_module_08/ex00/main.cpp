/* containers */

#include "easyfind.hpp"
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <map>

int main(void) {
	{
		std::cout << "test with array: ";
		std::array<int, 4> arr = {2, 3, 5, 4};
		std::array<int, 4>::iterator it;
		try
		{
			it = easyfind(arr, 3);
			std::cout << *it << " ";
			++it;
			std::cout << *it << std::endl;

			std::cout << *easyfind(arr, 8) << std::endl;
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	{
		std::cout << "test with vector: ";
		std::vector<int> arr(3, 9);
		try
		{
			std::cout << *easyfind(arr, 9) << std::endl;
			std::cout << *easyfind(arr, 1231) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "test with deque, list and map: ";
		std::deque<int> arr;
		std::list<int> list_arr(5, 1);
		arr.push_back(4);
		arr.push_back(-8);
		arr.push_back(8);
		try
		{
			std::cout << *easyfind(arr, -8) << " ";
			std::cout << *easyfind(list_arr, 1) << std::endl;
		}
		catch(const std::exception&)
		{}
	}
}
