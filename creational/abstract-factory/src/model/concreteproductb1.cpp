#include "model/concreteproductb1.hpp"
#include <string>

std::string ConcreteProductB1::useful_function_b() const {
	return "Result of product B1";
}

std::string ConcreteProductB1::another_useful_function_b(const AbstractProductA &collaborator) const {
	const std::string result{ collaborator.useful_function_a() };
	return "Result of B1 in collaboration with (" + result + ")";
}

