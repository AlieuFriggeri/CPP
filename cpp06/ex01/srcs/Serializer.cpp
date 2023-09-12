#include "Serializer.hpp"

// Constructors
Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &copy)
{
	(void) copy;
}


// Destructor
Serializer::~Serializer()
{
}


// Operators
Serializer & Serializer::operator=(const Serializer &assign)
{
	(void) assign;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t res;
	return (res = reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data *res;
	return (res = reinterpret_cast<Data *>(raw));
}