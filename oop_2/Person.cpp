#include "Person.h"
#include "Florist.h"
#include "FlowersBouquet.h"
#include <iostream>

Person::Person(std::string name) {
	this->name = name;
}

std::string Person::getName() {
	return name;
}

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> flowers) {
	florist->acceptOrder(person, flowers);
}

void Person::acceptFlowers(FlowersBouquet* bouquet) {
	std::cout << name << " accepts the flowers: ";
	std::vector<std::string> flowers = bouquet->getFlowers();
	for (size_t i = 0; i < flowers.size(); ++i) {
		std::cout << flowers[i];
		if (i < flowers.size() - 1)
			std::cout << ", ";
	}
	std::cout << "." << std::endl;
}