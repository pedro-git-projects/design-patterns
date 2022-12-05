#include "client/client.hpp"
#include <iostream>

void Client::client_code(const Creator& creator) {
	std::cout << "Client: The creator class is unknown, but it works" << std::endl
		<< creator.perform_operation() << std::endl;
}
