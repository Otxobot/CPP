#include "Serializer.hpp"

Serializer::Serializer(){

}

Serializer::~Serializer(){

}

Serializer::Serializer(const Serializer& obj){
    *this = obj;
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
    (void)rhs;
    return (*this);
}

