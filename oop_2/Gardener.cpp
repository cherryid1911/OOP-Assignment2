#include "Gardener.h"
#include "FlowersBouquet.h"
#include <iostream>

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
	std::cout << "Gardener " << name << " prepares flowers." << std::endl;
	FlowersBouquet* bouquet = new FlowersBouquet(flowers);
	return bouquet;
}
