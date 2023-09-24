<<<<<<< HEAD
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
=======
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
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
