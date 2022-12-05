#include "client/client.hpp"
#include "abstractfactory.hpp"
#include "abstractproducta.hpp"
#include <iostream>

void Client::client_code(const AbstractFactory& factory) {
	const AbstractProductA* pa{ factory.create_product_a() };
	const AbstractProductB* pb{ factory.create_product_b() };

	std::cout << pb->useful_function_b() << "\n";
	std::cout << pb->another_useful_function_b(*pa) << "\n"; 
}
