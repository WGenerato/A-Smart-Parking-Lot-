<<<<<<< HEAD
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
=======
#pragma once
#ifndef ELECTRICPANEL_H
#define ELECTRICPANEL_H
#include <QMessageBox>
#include <QApplication>
#include <QInputDialog>
#include "Payment.h"

class ElectricPanel {

private:
    double  ChargingRate = 25.0; // kwh
    double  ElectricityRate = 0.60;// $/kwh
    double additionalcost = 0.0; //$

public:
    ElectricPanel();
    void payAndCharge(Payment& payment);
    void askforCharging();
    QMessageBox msgBox;
    double ChargingTime=0.0; // in hours
};

#endif
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
