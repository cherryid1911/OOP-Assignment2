#include "Grower.h"
#include "Gardener.h"
#include "FlowersBouquet.h"
#include <iostream>

Grower::Grower(std::string name, Gardener* gardener)
    : Person(name), gardener(gardener) {
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers) {
    std::cout << "Grower " << name << " forwards the request to gardener " << gardener->getName() << "." << std::endl;
    FlowersBouquet* bouquet = gardener->prepareBouquet(flowers);
    std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << name << "." << std::endl;
    return bouquet;
}

Gardener* Grower::getGardener() {
    return gardener;
}

