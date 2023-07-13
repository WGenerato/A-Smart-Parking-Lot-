#include <iostream>
#include "AllClasses.h"

int main() {
    // Create a parking lot
    ParkingLot parkingLot("A New Parking Lot", "321 Yonge Street");

    // Create parking floors
    ParkingFloor f1("first floor", 6);
    ParkingFloor f2("second floor", 7);

    // Add parking floors to the parking lot
    parkingLot.addParkingFloor(f1);
    parkingLot.addParkingFloor(f2);

    // Create parking spots
    ParkingSpot spot1(1, ParkingSpotType::Handicapped, VehicleType::Car);
    ParkingSpot spot2(2, ParkingSpotType::Compact, VehicleType::Car);
    ParkingSpot spot3(3, ParkingSpotType::Large, VehicleType::Truck);
    ParkingSpot spot4(4, ParkingSpotType::Motorcycle, VehicleType::Motorcycle);
    ParkingSpot spot5(5, ParkingSpotType::Electric, VehicleType::Electric);

    // Add parking spots to the parking floors
    f1.addParkingSpot(spot1);
    f1.addParkingSpot(spot2);
    f2.addParkingSpot(spot3);
    f2.addParkingSpot(spot4);
    f2.addParkingSpot(spot5);

    // Display the initial parking spot availability
    ParkingDisplayBoard displayBoard;
    displayBoard.showParkingSpots(f1.getSpots());
    displayBoard.showParkingSpots(f2.getSpots());

    // Simulate a customer entering the parking lot
    EntrancePanel entrancePanel;
    ParkingTicket ticket = entrancePanel.getTicket();

    std::cout << "Ticket #" << ticket.getTicketNumber() << " issued." << std::endl;

    // Simulate a parking attendant scanning the ticket
    ParkingAttendantPortal attendantPortal;
    attendantPortal.scanTicket(ticket);

    // Simulate a customer paying for the ticket at the exit panel
    Payment payment;
    int period = 0;
    ExitPanel exitPanel;
    ticket.calPrice(period);
    double paid_amount = ticket.getPrice();
    attendantPortal.processPayment(exitPanel, ticket, payment, paid_amount);
    
    // Simulate the information of a customer who has paid for their ticket at the customer info portal
    
    CustomerInfoPortal customerInfoPortal;
    std::cout << "Customer info updated:" << std::endl;
    customerInfoPortal.payTicket(ticket, payment, paid_amount);


   

    // Display the updated parking spot availability
    displayBoard.showParkingSpots(f1.getSpots());
    displayBoard.showParkingSpots(f2.getSpots());



    // Display the updated parking spot availability
    displayBoard.showParkingSpots(f1.getSpots());
    displayBoard.showParkingSpots(f2.getSpots());

    // Simulate a customer paying and charging their electric vehicle at the electric panel
    ElectricPanel ePanel;
    ePanel.ChargingTime=15; //Assume we choose a 15 mins charging session.
    double chargingAmount=0; 
    ePanel.payAndCharge(payment, chargingAmount, ePanel.ChargingTime);

    return 0;
}
