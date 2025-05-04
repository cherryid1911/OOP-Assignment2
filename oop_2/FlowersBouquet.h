#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H

#include <string>
#include <vector>

class FlowersBouquet {
private:
	std::vector<std::string> bouquet;
	bool isArranged;

public:
	FlowersBouquet(std::vector<std::string> flowers);
	void arrange();
#endif
