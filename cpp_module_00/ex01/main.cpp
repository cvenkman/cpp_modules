#include "PhoneBook.hpp"

// writes introductory words when you first start the program
void welcome() {
	std::cout << "Welcome to a wonderful Phone Book!" << std::endl;
	std::cout << "You can use ADD to add contact, ";
	std::cout << "SEARCH to display contact's information, EXIT to quit :)\n" << std::endl;
}

// class A {
// 	private:
// 	int i;
// 	void itt1(){ this->i++;
// 	std::cout << this->i << std::endl; };
// 	public:
// 	A()
// 	: i(0)
// 	{
// 	};
// 	void itt(){ i++;
// 		std::cout << this->i << std::endl;
// 		this->itt1();
// 	 };
// 	~A(){};
// };

int main() {
	int i = 4;
	PhoneBook book;
	std::string cmd;
	welcome();
	while (1) {
		std::cout << "Enter command: ";
		getline(std::cin, cmd);
		if (std::cin.eof())
			break;
		book.menu(cmd);
	}
	return (0);
}
