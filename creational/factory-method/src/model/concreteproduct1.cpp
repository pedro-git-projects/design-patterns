#include "model/concreteproduct1.hpp"
#include "product.hpp"
#include <string>

ConcreteProduct1::ConcreteProduct1(): Product{} {}

std::string ConcreteProduct1::perform_operation() const {
	return "Constructed by ConcreteProduct1";
}
