#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> flowers) {
	this->flowers = flowers;
	isArranged = false;
}
	
void FlowersBouquet::arrange() {
	isArranged = true;
}

std::vector<std::string> FlowersBouquet::getFlowers() {
	return flowers;
}

