#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data {
	int i;
};

class Serializer
{
    private:
		Serializer();
		Serializer(const Serializer& obj);
		Serializer& operator=(const Serializer& rhs);
    public:
		~Serializer();
		static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif