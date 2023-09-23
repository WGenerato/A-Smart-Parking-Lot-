#include "EntrancePanel.h"
#include <vector>
#include <algorithm>
#include <iostream>
/*create a function that returns a ParkingTicket object with a unique ticket number.
 * The ticket number should be a randomized number starting from 1 to 100. The function should be static.
 * The function should be called getTicket(). The function should return a ParkingTicket object.
 * The function should be implented in EntrancePanel.cpp.*/
ParkingTicket EntrancePanel::getTicket() {
    while (true) {
        // Generate a random ticket number between 1 and 100
        int ticketNumber = rand() % 100 + 1;

        // Check if the ticket number has already been issued
        if (std::find(issued_tickets.begin(), issued_tickets.end(), ticketNumber) != issued_tickets.end()) {
            std::cout << "The ticket has already been issued." << std::endl;
        } else {
            // If the ticket number is unique, issue the ticket and add it to the list of issued tickets
            issued_tickets.push_back(ticketNumber);
            return ParkingTicket(ticketNumber); // Return a ParkingTicket object with the generated ticket number
        }
    }
}


/*create a list of ticket numbers that store the ticket numbers of all the tickets that have been issued.
If there's a dupilcate, print a message that said the ticket has already been issued.*/



