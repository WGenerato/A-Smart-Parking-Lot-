
#include "ParkingSpot.h"


ParkingSpot::ParkingSpot(int number, ParkingSpotType spotType, VehicleType vType)
    : spotNumber(number), type(spotType), vehicleType(vType), occupied(false) {}

int ParkingSpot::getSpotNumber() const {
    return spotNumber;
}

bool ParkingSpot::isOccupied() const {
    return occupied;
}

void ParkingSpot::parkVehicle() {
    occupied = true;
}

void ParkingSpot::removeVehicle() {
    occupied = false;
}

ParkingSpotType ParkingSpot::getType() const {
    return type;
}

VehicleType ParkingSpot::getVehicleType() const {
    return vehicleType;
}
