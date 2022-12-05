#ifndef CREATOR_H
#define CREATOR_H

#include "product.hpp"
#include <string>

// FactoryMethod function MUST use a pointer because &Product needs an instance
// However, Product* will point for the instance which will actually be constructed  further in the inheritance chain

struct Creator {
	Creator() = default; 
	virtual Product* FactoryMethod() const = 0; 
	std::string perform_operation() const;

	protected:
		virtual ~Creator() = 0;

};

#endif
