#pragma once
#ifndef PARKINGRATE_H
#define PARKINGRATE_H

class ParkingRate {
private:
    double hourlyRate=2.5;

public:

    double getHourlyRate() const {
        return hourlyRate;
    }

};

#endif
