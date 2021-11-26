#include <iostream>

int main (int argc, char **argv)
{
	using namespace std;

	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	for (int i = 1; argv[i]; i++) {
		for (int j = 0; j < strlen(argv[1]); j++)
			cout << (char)toupper(argv[i][j]);
		cout << ' ';
	}
	cout << endl;
	return 0;
}
