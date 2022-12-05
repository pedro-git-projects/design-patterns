#include "factory/concretefactory2.hpp"
#include "model/concreteproducta2.hpp"
#include "model/concreteproductb2.hpp"

AbstractProductA* ConcreteFactory2::create_product_a() const {
	return new ConcreteProductA2{};
}

AbstractProductB* ConcreteFactory2::create_product_b() const {
	return new ConcreteProductB2{};
}
