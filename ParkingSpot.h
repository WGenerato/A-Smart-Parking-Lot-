<<<<<<< HEAD
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
=======
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
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
