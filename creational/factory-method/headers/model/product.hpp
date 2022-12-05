#ifndef PRODUCT_H 
#define PRODUCT_H 

#include <string>
 
/* 
 	* Creating a virtual class that is impossible to instantiate
 	* implementing the methods I want to 
	* leving pure virtual functions to be implemented by child classes
	* creating a pure virtual destructor to make the class abstract
 */

struct Product {
	virtual std::string perform_operation() const = 0;

	protected:
		Product() = default; 
		virtual ~Product() = 0; // pure virtual destructor
};

#endif
