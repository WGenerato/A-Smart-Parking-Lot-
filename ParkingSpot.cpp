<<<<<<< HEAD

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
=======

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
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
