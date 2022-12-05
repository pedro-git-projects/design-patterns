#ifndef CLIENT_H
#define CLIENT_H

#include "abstractfactory.hpp"
struct Client {
	Client() = default;	
	void client_code(const AbstractFactory& factory);
};

#endif 
