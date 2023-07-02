
#include "EntrancePanel.h"

ParkingTicket EntrancePanel::getTicket() {
    static int ticketCounter = 0;
    return ParkingTicket(++ticketCounter);
}
