#ifndef WHOLESALER_H
#define WHOLESALER_H

#include <string>
#include <vector>
#include "Person.h"

class Grower;
class FlowersBouquet;

class Wholesaler :public Person{
private:
	Grower* grower;
	
public:
	Wholesaler(std::string name, Grower* gr);
	FlowersBouquet* acceptOrder(std::vector<std::string> vec);
};

#endif