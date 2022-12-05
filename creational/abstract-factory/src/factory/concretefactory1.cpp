#include "factory/concretefactory1.hpp"
#include "model/concreteproducta1.hpp"
#include "model/concreteproductb1.hpp"

/* This concrete factory will return products of the 1 variant 
 * Note that the signature is an abstract pointer even though
 * the return value is actually concrete
 * */

AbstractProductA* ConcreteFactory1::create_product_a() const {
	return new ConcreteProductA1{};
}

AbstractProductB* ConcreteFactory1::create_product_b() const {
	return new ConcreteProductB1{};
}
