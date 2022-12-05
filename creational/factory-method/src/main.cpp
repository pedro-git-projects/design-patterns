#include "client.hpp"
#include "concretecreator1.hpp"
#include "concretecreator2.hpp"
#include "creator.hpp"
#include <iostream>

/* * 
 * The code works by creating an abstract class, that is, a class with at least one pure virtual function;
 * Then we create the concrete versions of that class, which override said virtual function;
 * After that we define a Creator class which is also abstract; 
 * The method in the creator must take a pointer to our first abstract type;
 * We then create concrete Creators which return the concrete type to the pointer in the abstract creator;
 * Finally, the client function must take a reference to the abstract creator,
 * As the concrete creators inherit from the abstract one, we can pass any of those types at runtime;
 * */

int main() {
	std::cout << "App: Starting with ConcreteCreator1\n";

	ConcreteCreator1 creator1{};
	Client c{};
	c.client_code(creator1);

	std::cout << std::endl;


	std::cout << "App: Following with ConcreteCreator2\n";
	ConcreteCreator2 creator2{};
	c.client_code(creator2);
}
