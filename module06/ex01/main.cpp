
#include "Serializer.hpp"

int main() {
	{
		Data D;
		Data *res;
		D.i = -21;

		res = Serializer::deserialize(Serializer::serialize(&D));
		std::cout << "\nTEST 1:\n";
		std::cout << "  before: " << D.i << "\n";
		std::cout << "  after:  " << res->i << "\n";
	}
	{
		uintptr_t i = 42;
		uintptr_t o;

		o = Serializer::serialize(Serializer::deserialize(i));
		std::cout << "\nTEST 2:\n";
		std::cout << "  before: " << i << "\n";
		std::cout << "  after:  " << o << "\n";
	}
	std::cout << "\n";
	return 0;
}
