#pragma once
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "Payment.h"
class ParkingTicket {
private:
    int ticketNumber;
    bool paid;
    int amount;
public:
    int duration;
public:
    ParkingTicket(int number);
    int getTicketNumber() const;
    void calPrice(int duration) ; 
    int getPrice();
    bool isPaid() const;
    void markAsPaid();
};

#endif
