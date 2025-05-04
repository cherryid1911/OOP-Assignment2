#include "Person.h"

Person::Person(std::string name) : person_name(name) {}

std::string Person::name() const {
	return person_name;
}

void Person::orderFlowers(Florist* floristP, Person* personP, std::vector<std::string> vec) {
	floristP->orderFlowers(personP, vec);
}

void Person::acceptFlowers(FlowersBouquet* bouquetP) {
	// Implementation
}