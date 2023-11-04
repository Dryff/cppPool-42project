#include "Serializer.hpp"

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer & other) {
	(void)other;
}

Serializer::~Serializer() {
}

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

Serializer &				Serializer::operator=(Serializer const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	(void)rhs;
	return *this;
}