#ifndef CONCRETEPRODUCT1_H 
#define CONCRETEPRODUCT1_H 

#include "model/product.hpp"
#include <string>

struct ConcreteProduct1: public virtual Product{
	ConcreteProduct1();
	std::string perform_operation() const override;
};

#endif
