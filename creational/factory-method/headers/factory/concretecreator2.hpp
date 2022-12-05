#ifndef CONCRETECREATOR2_H
#define CONCRETECREATOR2_H

#include "creator.hpp"
#include "product.hpp"

struct ConcreteCreator2 : public Creator {
	ConcreteCreator2() = default;
	Product* FactoryMethod() const override; 
};

#endif
