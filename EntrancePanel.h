#pragma once
#ifndef ENTRANCEPANEL_H
#define ENTRANCEPANEL_H

#include "ParkingTicket.h"
#include <vector>

class EntrancePanel {
public:
    ParkingTicket getTicket();

private:
    std::vector<int> issued_tickets;

};

#endif
