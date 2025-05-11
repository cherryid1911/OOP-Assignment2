#ifndef FLORIST_H
#define FLORIST_H

#include <string>
#include <vector>
#include "Person.h"

class Wholesaler;
class FlowerArranger;
class DeliveryPerson;
class FlowerBouquet;

class Florist :public Person {
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;

public:
	Florist(std::string name, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp);
	void acceptOrder(Person* person, std::vector<std::string> flowers);
};

#endif
