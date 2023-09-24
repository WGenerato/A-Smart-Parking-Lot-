<<<<<<< HEAD
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
=======
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
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
