#ifndef CONCRETEFACTORY1_H
#define CONCRETEFACTORY1_H 

#include "abstractfactory.hpp"

struct ConcreteFactory1 : public AbstractFactory {
	ConcreteFactory1() = default;
	AbstractProductA* create_product_a() const override;
	AbstractProductB* create_product_b() const override;
};

#endif
