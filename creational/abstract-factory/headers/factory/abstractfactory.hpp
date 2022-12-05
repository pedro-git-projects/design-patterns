#ifndef ABSTRACFACTORY_H
#define ABSTRACFACTORY_H 

#include "abstractproducta.hpp"
#include "abstractproductb.hpp"

/**
 * The Abstract Factory interface declares a set of methods that return
 * different abstract products. These products are called a family and are
 * related by a high-level theme or concept. Products of one family are usually
 * able to collaborate among themselves. A family of products may have several
 * variants, but the products of one variant are incompatible with products of
 * another.
 */

struct AbstractFactory {
	AbstractFactory() = default;
	virtual AbstractProductA* create_product_a() const = 0;
	virtual AbstractProductB* create_product_b() const = 0;
};

#endif
