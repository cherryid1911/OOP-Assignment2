#ifndef GARDENER_H
#define GARDENER_H

#include <string>
#include <vector>
#include "Person.h"

class person;
class FlowersBouquet;

class Gardener :public Person {
public:
	FlowersBouquet* prepareBouquet(std::vector<std::string> vec);
};


#endif