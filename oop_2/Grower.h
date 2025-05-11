#ifndef GROWER_H
#define GROWER_H

#include <string>
#include <vector>
#include "Person.h"

class Gardener;
class FlowersBouquet;


class Grower :public Person {
private:
	Gardener* gardener;

public:
	Grower(std::string name, Gardener* gardener);
	FlowersBouquet* prepareOrder(std::vector<std::string> flowers);
};

#endif
