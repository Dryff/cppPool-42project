#include <iostream>
#include <inttypes.h>


struct Data {
	int a;
	float b;
	char c;
	double d;
};

class Serializer {

public:
	Serializer();
	Serializer(Serializer const & other);
	~Serializer();

    Serializer&	operator =(const Serializer& other);
	
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};