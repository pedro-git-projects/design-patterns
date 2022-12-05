#ifndef CONCRETEPRODUCT2_H 
#define CONCRETEPRODUCT2_H 

#include "model/product.hpp"
#include <string>

struct ConcreteProduct2: public virtual Product{
	ConcreteProduct2();
	std::string perform_operation() const override;
};

#endif
