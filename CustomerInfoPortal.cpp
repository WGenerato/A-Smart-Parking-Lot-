
#include "CustomerInfoPortal.h"
#include <QMessageBox>


void CustomerInfoPortal::payTicket(ParkingTicket& ticket, Payment& payment, double amount) {
    payment.makePayment(amount);
    ticket.markAsPaid();
    QString message = QString("Payment of $%1 for Ticket #%2 processed.").arg(amount).arg(ticket.getTicketNumber());

    // Display the message in a message box
    QMessageBox::information(nullptr, "Payment Confirmation", message,QMessageBox::Ok | QMessageBox::Cancel);
}
