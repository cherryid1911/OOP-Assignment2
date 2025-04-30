#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
class Florist;
class FlowersBouquet;

class Person {
protected:
	std::string person_name;

public:
	Person(std::string name) : person_name(name) {}
	std::string name() const;
	virtual ~Person() = default;
	virtual void orderFlowers(Florist* floristP, Person* personP, std::vector<std::string> vec);
	virtual void acceptFlowers(FlowersBouquet* bouquetP);
};

#endif