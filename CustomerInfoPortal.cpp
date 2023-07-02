
#include "CustomerInfoPortal.h"


void CustomerInfoPortal::payTicket(ParkingTicket& ticket, Payment& payment, double amount) {
    payment.makePayment(amount);
    ticket.markAsPaid();
    std::cout << "Payment of $" << amount << " for Ticket #" << ticket.getTicketNumber() << " processed." << std::endl;
}
