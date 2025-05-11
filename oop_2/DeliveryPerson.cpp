#include "DeliveryPerson.h"
#include "FlowersBouquet.h"
#include <iostream>

DeliveryPerson::DeliveryPerson(std::string name) 
	: Person(name) {
}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* flowerBouquet) {
	std::cout << "Delivery Person " << name << " delivers flowers to " << person->getName() << "." << std::endl;
	person->acceptFlowers(flowerBouquet);
}