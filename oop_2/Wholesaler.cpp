#include "Wholesaler.h"
#include "Grower.h"
#include "FlowersBouquet.h"
#include <iostream>

Wholesaler::Wholesaler(std::string name, Grower* grower)
	: Person(name), grower(grower) {
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
	std::cout << "Wholesaler " << name << " forwards the request to grower " << grower->getName() << "." << std::endl;
	FlowersBouquet* bouquet = grower->prepareOrder(flowers);
	std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << name << "." << std::endl;
	return bouquet;
}
