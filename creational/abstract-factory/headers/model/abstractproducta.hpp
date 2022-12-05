#ifndef ABSTRACTPRODUCTA_H 
#define ABSTRACTPRODUCTA_H 

#include <string>

struct AbstractProductA {
	virtual std::string useful_function_a() const = 0;

	protected:
		AbstractProductA() = default; 
		virtual ~AbstractProductA() = 0; 
};

#endif
