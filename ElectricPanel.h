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
