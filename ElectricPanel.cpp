
#include "ElectricPanel.h"
<<<<<<< HEAD


void ElectricPanel::payAndCharge(Payment& payment, double amount, double ChargingTime) {
    if (ChargingTime >= 10) {
        additionalcost += 0.10; // if it takes more than 10 minutes to charge, charge additional 10 cents.
    }
    amount = (ChargingTime / 60) * ChargingRate * ElectricityRate + additionalcost;

    if (amount == 0) {
        std::cout << "Please pay your amount for this session" << std::endl;
    } else
    std::cout << "Your EV has been charged with this amount: "<<"$"<< amount << "\n" << " Charging session ended" << std::endl;
}
=======
#include "Payment.h"

ElectricPanel::ElectricPanel() {
    msgBox.setText("Do you want to charge your EV?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
}

void ElectricPanel::askforCharging(){
    int choice = msgBox.exec();
    bool ok;
    if (choice == QMessageBox::Yes) {
        // User chose to charge the vehicle
        ChargingTime = QInputDialog::getDouble(nullptr, "Enter charging time (1 to 24 hours):", "Hours:", 1, 1.0, 24.0, 1, &ok, Qt::WindowFlags(), 0.5);
    } else {
        msgBox.setText("Charging Session declined.");
        msgBox.exec();
    }
}


void ElectricPanel::payAndCharge(Payment& payment) {

        double chargeFee = 0.0;

        if (ChargingTime >= 10.0) {
            additionalcost += 10; // if it takes more than 10 hours to charge, charge an additional 10 dollars.
        }
        chargeFee = (ChargingTime) * ChargingRate * ElectricityRate + additionalcost;

        if (chargeFee == 0) {
             msgBox.setText("Charging Session declined.");
            msgBox.exec();
        } else {

            msgBox.setText("Your EV has been charged with this amount: $" + QString::number(chargeFee) + "\n\nCharging session ended.");
             msgBox.exec();
        }
    }

>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
