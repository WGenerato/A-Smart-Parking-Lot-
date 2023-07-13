#include "ParkingTicket.h"

#include <iostream>
ParkingTicket::ParkingTicket(int number)
    : ticketNumber(number), paid(false), amount(2.5) {} // Hourly rate is $2.5 for each ticket whose parking time is more than 3 hours

int ParkingTicket::getTicketNumber() const {
    return ticketNumber;
}



void ParkingTicket::calPrice(int duration) {
    while (true){
    std::cout << "Please specify how long your vehicle will be parked in hour(s)" << std::endl;
    std::cin >> duration;
    if (duration == 1) {
        amount = 4.0;
        break;
    } else
        if (duration == 2 || duration == 3) {
            amount = 3.5;
            break;
    } else
    if (duration >=4 && duration<=24) {
        amount *= duration;
        break;
    }
    else{ std::cout << "This parking lot operates on a hourly rate. Please enter a value that ranges from 1 to 24 " << std::endl; }
 
    }
}

double ParkingTicket::getPrice() {
    return amount;
}

bool ParkingTicket::isPaid() const {
    return paid;
}

void ParkingTicket::markAsPaid() {
    paid = true;
}
