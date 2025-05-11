#include "Florist.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"
#include <iostream>

Florist::Florist(std::string name, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp)
	:Person(name), wholesaler(ws), flowerArranger(fa), deliveryPerson(dp) {
}

void Florist::acceptOrder(Person* person, std::vector<std::string> flowers) {
	std::cout << "Florist " << name << " forwards request to Wholesaler " << wholesaler->getName() << "." << std::endl;
	FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);

	std::cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << name << "." << std::endl;

	std::cout << "Florist " << name << " request flowers arrangement from Flower Arranger " << flowerArranger->getName() << "." << std::endl;
	flowerArranger->arrangeFlowers(bouquet);
	std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << name << "." << std::endl;

	std::cout << "Florist " << name << " forwards flowers to Delivery Person " << deliveryPerson->getName() << "." << std::endl;
	deliveryPerson->deliver(person, bouquet);
}



