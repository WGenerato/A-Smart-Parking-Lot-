#pragma once
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include <QObject>

class ParkingTicket : public QObject {
    Q_OBJECT // Macro needed for signals and slots

public:
    ParkingTicket(int number);
    double getPrice();
    bool isPaid() const;
    void markAsPaid();
    int getTicketNumber() const;
    void calPrice(); // Removed bool parameter
    int duration; // Added duration member variable

signals:
    void entrancePressed(); // Signal to indicate the entrance button is pressed
    void exitPressed();     // Signal to indicate the exit button is pressed

private:
    int ticketNumber;
    bool paid;
    double amount;

};

#endif
