<<<<<<< HEAD
#pragma once
#ifndef ENTRANCEPANEL_H
#define ENTRANCEPANEL_H

#include "ParkingTicket.h"

class EntrancePanel {
public:
    ParkingTicket getTicket();
};

#endif
=======
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
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
