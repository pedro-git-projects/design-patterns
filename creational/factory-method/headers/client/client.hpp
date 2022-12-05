#ifndef CLIENT_H
#define CLIENT_H

#include "creator.hpp"
struct Client {
	Client() = default;	
	void client_code(const Creator& creator);
};

#endif 
