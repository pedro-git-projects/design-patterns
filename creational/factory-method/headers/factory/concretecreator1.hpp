#ifndef CONCRETECREATOR1_H
#define CONCRETECREATOR1_H

#include "creator.hpp"
#include "product.hpp"

struct ConcreteCreator1 : public Creator {
	ConcreteCreator1() = default;
	Product* FactoryMethod() const override; // We need to override the FactoryMethod to define the actual type
};

#endif
