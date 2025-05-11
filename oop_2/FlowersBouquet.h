#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H

#include <string>
#include <vector>

class FlowersBouquet {
private:
	std::vector<std::string> flowers;
	bool isArranged;

public:
	FlowersBouquet(std::vector<std::string> flowers);
	void arrange();
	std::vector<std::string> getFlowers();
};

#endif
