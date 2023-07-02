
#include "ParkingLot.h"


ParkingLot::ParkingLot(const std::string& lotName, const std::string& lotAddress)
    : name(lotName), address(lotAddress) {}

void ParkingLot::addParkingFloor(ParkingFloor floor) {
    floors.emplace_back(floor);
}

std::string ParkingLot::getName() const {
    return name;
}

std::string ParkingLot::getAddress() const {
    return address;
}

const std::vector<ParkingFloor>& ParkingLot::getFloors() const {
    return floors;
}
