#include "mainwindow.h"
#include "AllClasses.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include <iostream>
#include <QDebug>
#include <QElapsedTimer>

using namespace std;

int main(int argc, char *argv[])
{
    QElapsedTimer timer;
    timer.start();
    QApplication app(argc, argv);
    EntrancePanel entrancePanel;
    ParkingTicket  ticket = entrancePanel.getTicket();
    ParkingAttendantPortal attendantPortal;

    Payment payment;
    ElectricPanel chargingFee;
    // Create the main window
    QWidget window;
    window.setWindowTitle("321 Yonge Parking Lot ");
    window.setGeometry(100, 100, 800, 600);

    // Create buttons and labels
    QPushButton *enterButton = new QPushButton("Initiate Entrance", &window);
    QPushButton *exitButton = new QPushButton("Initiate Exit", &window);


    // Layout to arrange widgets vertically
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(enterButton);
    layout->addWidget(exitButton);


    // Set layout to the window
    window.setLayout(layout);

    // Create a parking lot and other required objects (commented out for simplicity)
    // ParkingLot parkingLot("A New Parking Lot", "321 Yonge Street");
    // ...
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



    // Connect buttons to slots (functions) to simulate actions
    QObject::connect(enterButton, &QPushButton::clicked, &ticket, &ParkingTicket::entrancePressed);
    QObject::connect(exitButton, &QPushButton::clicked, &ticket, &ParkingTicket::exitPressed);

   QObject::connect(&ticket, &ParkingTicket::entrancePressed, [&]() {
        // Simulate a customer entering the parking lot
        // Add your actual entrancePanel.getTicket() and related code here
       bool ok;
       ticket.duration = QInputDialog::getInt(nullptr, "Enter Duration", "Enter the parking duration (1 to 24 hours):", 1, 1, 24, 1, &ok);

       QString message = QString("Simulating Entrance...\nTicket #%1 issued.").arg(ticket.getTicketNumber());

        // Simulate a parking attendant scanning the ticket

        attendantPortal.scanTicket(ticket);
        QMessageBox::information(&window, "Entrance Simulation", message);

        // Display the initial parking spot availability
        ParkingDisplayBoard displayBoard;
        displayBoard.showParkingSpots(f1.getSpots());
        displayBoard.showParkingSpots(f2.getSpots());

    });

   QObject::connect(&ticket, &ParkingTicket::exitPressed, [&]()    {
        // Simulate a customer exiting the parking lot and paying
        //int period = 0;
        ExitPanel exitPanel;
        ticket.calPrice();
        double paid_amount = ticket.getPrice();
        attendantPortal.processPayment(exitPanel, ticket, payment, paid_amount);

        // Simulate the information of a customer who has paid for their ticket at the customer info portal
        CustomerInfoPortal customerInfoPortal;
        cout << "Customer info updated:" <<  endl;

        customerInfoPortal.payTicket(ticket, payment, paid_amount);
        chargingFee.payAndCharge(payment);



    });


    // Show the main window
    window.show();

    // Start the Qt event loop
    qDebug() << "Execution time: " << timer.elapsed() << "milliseconds";

    return app.exec();
}


