#ifndef ABSTRACTPRODUCTB_H
#define ABSTRACTPRODUCTB_H

#include "abstractproducta.hpp"
#include <string>

struct AbstractProductB {
	virtual std::string useful_function_b() const = 0;
	virtual std::string another_useful_function_b(const AbstractProductA& collaborator) const = 0;

	protected:
		AbstractProductB();
		virtual ~AbstractProductB() = 0;
};

#endif
