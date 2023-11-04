#include "Serializer.hpp"


int main() {

	Data data;

	data.a = 42;
	data.b = 14.4f;
	data.c = 'Y';
	data.d = 65.7;

	std::cout << "data.a : " << data.a << std::endl;
	std::cout << "data.b : " << data.b << std::endl;
	std::cout << "data.c : " << data.c << std::endl;
	std::cout << "data.d : " << data.d << std::endl;

	std::cout << "-----------" << std::endl;
	std::cout << "SERIALIZING" << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);
	Data *dataSerialized = Serializer::deserialize(ptr);
	
	std::cout << "-----------" << std::endl;

	std::cout << "data.a : " << dataSerialized->a << std::endl;
	std::cout << "data.b : " << dataSerialized->b << std::endl;
	std::cout << "data.c : " << dataSerialized->c << std::endl;
	std::cout << "data.d : " << dataSerialized->d << std::endl;
	return 0;
}