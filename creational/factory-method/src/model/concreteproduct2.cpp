#include "model/concreteproduct2.hpp"
#include "product.hpp"
#include <string>

ConcreteProduct2::ConcreteProduct2(): Product{} {}

std::string ConcreteProduct2::perform_operation() const {
	return "Constructed by ConcreteProduct2";
}
