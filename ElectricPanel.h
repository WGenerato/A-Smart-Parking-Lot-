#pragma once
#ifndef ELECTRICPANEL_H
#define ELECTRICPANEL_H

#include "Payment.h"
#include <ctime>
class ElectricPanel {
public:
    double ChargingTime; // in minutes
private:
    double  ChargingRate = 150.0; // kwh
    double  ElectricityRate = 0.60;// $/kwh
    double additionalcost = 0.0; //$

public:
    void payAndCharge(Payment& payment, double amount, double ChargingTime);
};

#endif