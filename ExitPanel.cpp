
#include "ExitPanel.h"

void ExitPanel::processPayment(ParkingTicket& ticket, double amount) {
    if (ticket.isPaid()) {
        std::cout << "Ticket #" << ticket.getTicketNumber() << " has already been paid." << std::endl;
    }
    else {
        Payment payment;
        payment.makePayment(amount);
        ticket.markAsPaid();
        std::cout << "Payment of $" << amount << " for Ticket #" << ticket.getTicketNumber() << " processed." << std::endl;
    }
}
