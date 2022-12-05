#include "concreteproduct2.hpp"
#include "product.hpp"
#include <factory/concretecreator2.hpp>
#include <string>

Product* ConcreteCreator2::FactoryMethod() const {
	return new ConcreteProduct2();
}
