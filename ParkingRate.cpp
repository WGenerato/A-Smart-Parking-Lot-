
#include "ParkingRate.h"

ParkingRate::ParkingRate(double rate) : hourlyRate(rate) {}

double ParkingRate::getHourlyRate() const {
    return hourlyRate;
}
