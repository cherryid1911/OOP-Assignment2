#include "FlowerArranger.h"
#include "FlowersBouquet.h"
#include <iostream>

FlowerArranger::FlowerArranger(std::string name) 
	: Person(name) {}

void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) {
	std::cout << "Flower Arranger " << name << " arranges flowers." << std::endl;
	bouquet->arrange();
}