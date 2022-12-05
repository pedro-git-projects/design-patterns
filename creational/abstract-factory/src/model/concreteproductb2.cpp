#include "model/concreteproductb2.hpp"
#include <string>

std::string ConcreteProductB2::useful_function_b() const {
	return "Result of product B1";
}

std::string ConcreteProductB2::another_useful_function_b(const AbstractProductA& collaborator) const {
	const std::string result{ collaborator.useful_function_a() };
	return "Result of B1 in collaboration with (" + result + ")";
}

