#ifndef PARKINGSPOT_H
#define PARKINGSPOT_H

#include "Vehicle.h"

enum class ParkingSpotType {
    Handicapped,
    Compact,
    Large,
    Motorcycle,
    Electric
};

class ParkingSpot {
private:
    int spotNumber;
    ParkingSpotType type;
    VehicleType vehicleType;
    bool occupied;

public:
    ParkingSpot(int number, ParkingSpotType spotType, VehicleType vType);
    int getSpotNumber() const;
    bool isOccupied() const;
    void parkVehicle();
    void removeVehicle();
    ParkingSpotType getType() const;
    VehicleType getVehicleType() const;
};

#endif
