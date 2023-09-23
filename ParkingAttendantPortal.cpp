
#include "ParkingAttendantPortal.h"


void ParkingAttendantPortal::scanTicket(ParkingTicket& ticket) {
    std::cout << "Ticket #" << ticket.getTicketNumber() << " scanned." << std::endl;
}

void ParkingAttendantPortal::processPayment(ExitPanel& exitPanel, ParkingTicket& ticket, Payment& payment, double amount) {
    exitPanel.processPayment(ticket, amount);
}
