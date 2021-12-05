#include <iostream>

int main (int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; argv[i]; i++) {
		for (int j = 0; j < strlen(argv[1]); j++)
			std::cout << (char)toupper(argv[i][j]);
		std::cout << ' ';
	}
	std::cout << std::endl;
	return 0;
}
