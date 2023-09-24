
#include "CustomerInfoPortal.h"
<<<<<<< HEAD
=======
#include <QMessageBox>
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438


void CustomerInfoPortal::payTicket(ParkingTicket& ticket, Payment& payment, double amount) {
    payment.makePayment(amount);
    ticket.markAsPaid();
<<<<<<< HEAD
    std::cout << "Payment of $" << amount << " for Ticket #" << ticket.getTicketNumber() << " processed." << std::endl;
=======
    QString message = QString("Payment of $%1 for Ticket #%2 processed.").arg(amount).arg(ticket.getTicketNumber());

    // Display the message in a message box
    QMessageBox::information(nullptr, "Payment Confirmation", message,QMessageBox::Ok | QMessageBox::Cancel);
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
}
