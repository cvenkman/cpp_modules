#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

static void error(std::string error_str) {
	std::cerr << error_str << std::endl;
	std::exit(EXIT_FAILURE);
}

void my_replace(std::string s1, std::string s2, 
		std::ofstream &file_write, std::ifstream &file_read) {
	std::string line;
	std::size_t found_pos = 0;
	while (getline(file_read, line)) {
		found_pos = line.find(s1);
		while (found_pos != std::string::npos)
		{
			line.erase(found_pos, s1.size());
			line.insert(found_pos, s2);
			found_pos = line.find(s1, found_pos);
		}
		file_write << line;
		if (!file_read.eof())
			file_write << std::endl;
	}
}

void make_file_out_name(std::string& file) {
	int i = 0;
	while (file[i]) {
		file[i] = toupper(file[i]);
		i++;
	}
}

int main(int argc, char **argv) {
	if (argc != 4)
		error("arg error");
	std::string file(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty() || s2.empty())
		error("empty string");

	std::ifstream file_read(file);
	if (!file_read.is_open())
		error("file error");
	make_file_out_name(file);
	std::ofstream file_write(file + ".replace");
	if (!file_write.is_open())
		error("file error");
	my_replace(s1, s2, file_write, file_read);
	file_read.close();
	return 0;
}
