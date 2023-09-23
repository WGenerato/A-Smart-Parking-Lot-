#pragma once
#ifndef CUSTOMERINFOPORTAL_H
#define CUSTOMERINFOPORTAL_H

#include "ParkingTicket.h"
#include "Payment.h"

class CustomerInfoPortal {
public:
    void payTicket(ParkingTicket& ticket, Payment& payment, double amount);
};

#endif
