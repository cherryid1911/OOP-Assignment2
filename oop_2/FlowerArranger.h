#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H

#include <string>
#include <vector>
#include "Person.h"

class FlowersBouquet;

class FlowerArranger : public Person {
public:
	FlowerArranger(std::string name);
	void arrangeFlowers(FlowersBouquet* bouquet);
};

#endif
