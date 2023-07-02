#include "ParkingDisplayBoard.h"
#include <iostream>
void ParkingDisplayBoard::showParkingSpots(const std::vector<ParkingSpot>& spots) const {
    std::cout << "Parking Spots Availability:" << std::endl;
    for (const auto& spot : spots) {
        std::string spotType;
        switch (spot.getType()) {
        case ParkingSpotType::Handicapped:
            spotType = "Handicapped";
            break;
        case ParkingSpotType::Compact:
            spotType = "Compact";
            break;
        case ParkingSpotType::Large:
            spotType = "Large";
            break;
        case ParkingSpotType::Motorcycle:
            spotType = "Motorcycle";
            break;
        case ParkingSpotType::Electric:
            spotType = "Electric";
            break;
        }

        std::string vehicleType;
        switch (spot.getVehicleType()) {
        case VehicleType::Car:
            vehicleType = "Car";
            break;
        case VehicleType::Truck:
            vehicleType = "Truck";
            break;
        case VehicleType::Electric:
            vehicleType = "Electric";
            break;
        case VehicleType::Van:
            vehicleType = "Van";
            break;
        case VehicleType::Motorcycle:
            vehicleType = "Motorcycle";
            break;
        }

        std::cout << "Spot #" << spot.getSpotNumber() << ": Type: " << spotType << ", Vehicle Type: " << vehicleType;
        if (spot.isOccupied()) {
            std::cout << " (Occupied)";
        }
        else {
            std::cout << " (Available)";
        }
        std::cout << std::endl;
    }
}
