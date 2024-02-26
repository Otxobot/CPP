
#include "Serializer.hpp"

int main() 
{
	Data D;
	Data *ptr;

	ptr = &D;

	uintptr_t unsigned_pointer;

	unsigned_pointer = Serializer::serialize(ptr);

	std::cout << Serializer::serialize(ptr) << std::endl;
	std::cout << unsigned_pointer << std::endl;
	std::cout << "================================\n";
	std::cout << Serializer::deserialize(unsigned_pointer) << std::endl;
	std::cout << ptr << std::endl;
	
	return 0;
}
