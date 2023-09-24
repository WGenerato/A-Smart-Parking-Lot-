<<<<<<< HEAD
#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <string>
#include <vector>
#include "ParkingFloor.h"

class ParkingLot {
private:
    std::string name;
    std::string address;
    std::vector<ParkingFloor> floors;

public:
    ParkingLot(const std::string& lotName, const std::string& lotAddress);
    void addParkingFloor(ParkingFloor floor);
    std::string getName() const;
    std::string getAddress() const;
    const std::vector<ParkingFloor>& getFloors() const;
};

#endif
=======
#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <string>
#include <vector>
#include "ParkingFloor.h"

class ParkingLot {
private:
    std::string name;
    std::string address;
    std::vector<ParkingFloor> floors;

public:
    ParkingLot(const std::string& lotName, const std::string& lotAddress);
    void addParkingFloor(ParkingFloor floor);
    std::string getName() const;
    std::string getAddress() const;
    const std::vector<ParkingFloor>& getFloors() const;
};

#endif
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
