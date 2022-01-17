/* reinterpret_cast */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main() {
	Data *data = new Data;
	data->string = "katty";
	data->number = 21;
	data->symbol = 's';

	uintptr_t u = serialize(data);
	Data *data2 = deserialize(u); 
	data2->symbol = 'v';

	std::cout << std::setw(42) << "pointer in uintptr_t after serialize: "
		<< u << std::endl;
	
	std::cout << std::setw(42) << "data before serialize: " << data->string
		<< " and " << data->number << " and " << data->symbol << std::endl;
	std::cout << std::setw(42) << "adress before serialize: " << data << std::endl;

	std::cout << std::setw(42) << "data before serialize: " << data2->string
		<< " and " << data2->number << " and " << data->symbol << std::endl;
	std::cout << std::setw(42) << "adress after deserialize: " << data2 << std::endl;

	delete data;
}
