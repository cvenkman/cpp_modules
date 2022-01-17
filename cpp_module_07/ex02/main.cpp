/* class template */

#include "Array.hpp"

template <typename T>
void printArray(T const* array) {
	std::cout << "printArray: ";
	for (int i = 0; i < array->size(); i++) {
		std::cout << (*array)[i] << " ";
	}
	std::cout << std::endl;
}

int main(void) {
	{
		std::cout << "copy constructor and operator= test\n";
		Array<float> arr(3);
		Array<float> arr2(arr);
		printArray(&arr);
		printArray(&arr2);
		arr[1] = 3.4f;
		arr2 = arr;
		printArray(&arr);
		printArray(&arr2);
		std::cout << std::endl;
	}
	{
		std::cout << "std::string\n";
		Array<std::string> arr(5);
		printArray(&arr);
		std::cout << "change arr[0] and arr[4]:\n";
		arr[0] = "cat";
		arr[4] = "dog";
		try
		{
			printArray(&arr);
			std::cout << arr[10] << std::endl;
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	{
		std::cout << "\nint\n";
		Array<int> *arr = new Array<int>(10);
		printArray(arr);
		std::cout << "change arr[0] and arr[1]:\n";
		(*arr)[0] = 2;
		(*arr)[1] = 3;
		try
		{
			printArray(arr);
			std::cout << (*arr)[-1] << std::endl;
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
		delete arr;
	}
	while (1);
}