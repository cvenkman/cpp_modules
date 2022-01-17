#include "iter.hpp"

template <typename T> void foo(T &elem) {
	elem++;
}

template <typename T> void print_array(T const array) {
	for (int i = 0; i < 10; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int main(void) {
	{
		int array[10];
		for (int i = 0; i < 10; i++)
			array[i] = i;
		print_array(array);
		iter(array, 10, &foo);
		print_array(array);
	}
	std::cout << "----------\n";
	char array[10];
	for (int i = 0; i < 10; i++)
		array[i] = 'a';
	print_array(array);
	iter(array, 10, &foo);
	print_array(array);
}
