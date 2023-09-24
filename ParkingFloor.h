<<<<<<< HEAD
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
=======
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
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
