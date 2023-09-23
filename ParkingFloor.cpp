
#include "ParkingFloor.h"



ParkingFloor::ParkingFloor(const std::string& floorName, int numSpots) : name(floorName) {
    spots.reserve(numSpots);
}

void ParkingFloor::addParkingSpot(ParkingSpot spot) {
    spots.emplace_back(spot);
}

std::string ParkingFloor::getName() const {
    return name;
}

const std::vector<ParkingSpot>& ParkingFloor::getSpots() const {
    return spots;
}
