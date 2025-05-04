#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) : Person(name) {}

void deliver(Person* person, FlowersBouquet* flowerBouquet) {
	person->acceptFlowers(flowerBouquet);
}