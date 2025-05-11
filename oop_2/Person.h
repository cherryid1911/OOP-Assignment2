#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
class Florist;
class FlowersBouquet;

class Person {
protected:
	std::string name;

public:
	Person(std::string name);
	std::string getName();
	virtual void orderFlowers(Florist* florist, Person* person, std::vector<std::string> flowers);
	virtual void acceptFlowers(FlowersBouquet* bouquet);
};
#endif