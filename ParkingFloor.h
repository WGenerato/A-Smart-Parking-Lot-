#ifndef PARKINGFLOOR_H
#define PARKINGFLOOR_H

#include <string>
#include <vector>
#include "ParkingSpot.h"

class ParkingFloor {
private:
    std::string name;
    std::vector<ParkingSpot> spots;

public:
    ParkingFloor(const std::string& floorName, int numSpots);
    void addParkingSpot(ParkingSpot spot);
    std::string getName() const;
    const std::vector<ParkingSpot>& getSpots() const;
};

#endif
