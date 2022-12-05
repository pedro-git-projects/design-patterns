#include "concreteproduct1.hpp"
#include "product.hpp"
#include <factory/concretecreator1.hpp>
#include <string>

Product* ConcreteCreator1::FactoryMethod() const {
	return new ConcreteProduct1();
}
