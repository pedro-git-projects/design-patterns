#ifndef CONCRETEPRODUCTA1_H 
#define CONCRETEPRODUCTA1_H 

#include "abstractproducta.hpp"

struct ConcreteProductA1 : public AbstractProductA {
	ConcreteProductA1() = default;
	std::string useful_function_a() const override;
}; 

#endif
