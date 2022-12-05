#include <iostream>
#include "factory/concretefactory1.cpp"
#include "factory/concretefactory2.cpp"
#include "client/client.hpp"

int main() {
	std::cout << "Client: Testing client code with the first factory type:\n";
	ConcreteFactory1 f1{};
	Client c{};
	c.client_code(f1);
	std::cout << std::endl;

	std::cout << "Client: Testing the same client code with the second factory type:\n";
	ConcreteFactory2 f2{};
	c.client_code(f2);
}
