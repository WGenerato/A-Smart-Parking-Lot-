#pragma once
#ifndef EXITPANEL_H
#define EXITPANEL_H

#include "ParkingTicket.h"
#include "Payment.h"

class ExitPanel {
public:
    void processPayment(ParkingTicket& ticket, double amount);
};

#endif
