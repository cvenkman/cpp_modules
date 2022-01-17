/* static_cast */

#include "Convert.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "wrong number of arguments\n";
		return -1;
	}
	try
	{
		Convert example(argv[1]);
		example.convert();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
