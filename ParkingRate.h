#pragma once
#ifndef PARKINGRATE_H
#define PARKINGRATE_H

class ParkingRate {
private:
    double hourlyRate;

public:
    ParkingRate(double rate);
    double getHourlyRate() const;
};

#endif
