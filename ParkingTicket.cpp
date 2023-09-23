#include "ParkingTicket.h"
#include "QInputDialog"
#include <iostream>
#include <QDebug>
#include "ParkingRate.h"
ParkingTicket::ParkingTicket(int number)
    : ticketNumber(number), paid(false), duration(1) {} // Default duration

int ParkingTicket::getTicketNumber() const {
    return ticketNumber;
}

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
