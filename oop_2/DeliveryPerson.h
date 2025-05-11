#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H

#include <string>
#include <vector>
#include "Person.h"

class FlowersBousquet;

class DeliveryPerson : public Person {
public:
	DeliveryPerson(std::string name);
	void deliver(Person* person, FlowersBouquet* bouquet);
};

#endif