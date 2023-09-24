#include "ParkingTicket.h"
<<<<<<< HEAD

#include <iostream>
ParkingTicket::ParkingTicket(int number)
    : ticketNumber(number), paid(false), amount(2.5) {} // Hourly rate is $2.5 for each ticket whose parking time is more than 3 hours
=======
#include "QInputDialog"
#include <iostream>
#include <QDebug>
#include "ParkingRate.h"
ParkingTicket::ParkingTicket(int number)
    : ticketNumber(number), paid(false), duration(1) {} // Default duration
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438

int ParkingTicket::getTicketNumber() const {
    return ticketNumber;
}

<<<<<<< HEAD


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
=======
ParkingRate rate;
double dollarperHour = rate.getHourlyRate();

void ParkingTicket::calPrice() {
    amount =0.0;

            if (duration == 1) {
                amount = 4.0;
                \
            } else if (duration == 2 || duration == 3) {
                amount = 3.5;

            } else if (duration >= 4 && duration <= 24) {
                amount = (amount + dollarperHour) * duration;


            } else {
                qDebug() << "Invalid duration. Please enter a value between 1 and 24 hours.";
                // You may want to handle invalid input gracefully in your application.
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
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
