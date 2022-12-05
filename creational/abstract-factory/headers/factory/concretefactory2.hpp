#ifndef CONCRETEFACTORY2_H
#define CONCRETEFACTORY2_H 

#include "abstractfactory.hpp"

struct ConcreteFactory2 : public AbstractFactory {
	ConcreteFactory2() = default;
	AbstractProductA* create_product_a() const override;
	AbstractProductB* create_product_b() const override;
};

#endif
