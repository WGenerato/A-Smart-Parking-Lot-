
#include "ElectricPanel.h"


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
