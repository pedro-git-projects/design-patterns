#include "product.hpp"
#include <factory/creator.hpp>

Creator::~Creator(){};

std::string Creator::perform_operation() const {
	Product* p = this->FactoryMethod();
	std::string result{ "Creator: The same creator has just worked with" + p->perform_operation() };
	return result;
}

