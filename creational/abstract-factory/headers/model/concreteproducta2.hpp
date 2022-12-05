#ifndef CONCRETEPRODUCTA2_H 
#define CONCRETEPRODUCTA2_H 

#include "abstractproducta.hpp"

struct ConcreteProductA2 : public AbstractProductA {
	ConcreteProductA2() = default;
	std::string useful_function_a() const override;
};
#endif
