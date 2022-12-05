#ifndef CONCRETEPRODUCTB1_H
#define CONCRETEPRODUCTB1_H

#include "abstractproducta.hpp"
#include "abstractproductb.hpp"
#include <string>

/*
	The variant, Product B1, is only able to work correctly with the variant,
	Product A1. Nevertheless, it accepts any instance of AbstractProductA as an argument.
*/
struct ConcreteProductB1 : AbstractProductB {
	std::string useful_function_b() const override;
	std::string another_useful_function_b(const AbstractProductA& collaborator) const override;
};

#endif
