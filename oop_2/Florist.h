#ifndef FLORIST_H
#define FLORIST_H

#include <string>
#include <vector>
#include "Person.h"

class Wholesaler;
class FlowerArranger;
class DeliveryPerson;

class Florist :public Person {
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;
public:
	Florist(std::string name);
	void acceptOrder(Person* personP, std::vector<std::string> vec);
};

#endif
