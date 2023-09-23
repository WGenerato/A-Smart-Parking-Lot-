#pragma once
#ifndef PARKINGDISPLAYBOARD_H
#define PARKINGDISPLAYBOARD_H

#include <vector>
#include "ParkingSpot.h"

class ParkingDisplayBoard {
public:
    void showParkingSpots(const std::vector<ParkingSpot>& spots) const;
};

#endif
