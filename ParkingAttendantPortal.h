#pragma once
#ifndef PARKINGATTENDANTPORTAL_H
#define PARKINGATTENDANTPORTAL_H

#include "ParkingTicket.h"
#include "ExitPanel.h"
#include "Payment.h"

class ParkingAttendantPortal {
public:
    void scanTicket(ParkingTicket& ticket);
    void processPayment(ExitPanel& exitPanel, ParkingTicket& ticket, Payment& payment, double amount);
};

#endif
