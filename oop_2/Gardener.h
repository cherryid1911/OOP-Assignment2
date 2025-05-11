#ifndef GARDENER_H
#define GARDENER_H

#include <string>
#include <vector>
#include "Person.h"

class FlowersBouquet;

class Gardener :public Person {
public:
	Gardener(std::string name);
	FlowersBouquet* prepareBouquet(std::vector<std::string> flowers);
};


#endif