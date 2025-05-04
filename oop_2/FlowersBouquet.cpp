#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> flowers)
	: bouquet(flowers), isArranged(false) {}

void FlowersBouquet::arrange() {
	isArranged = true;
}