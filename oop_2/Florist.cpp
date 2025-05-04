#include "Florist.h"

Florist::Florist(std::string name, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp)
	: Person(name), wholesaler(ws), flowerArranger(fa), deliveryPerson(dp) {
}
void acceptOrder(Person* personP, std::vector<std::string> vec) {
	personP->acceptFlowers();
}


