#ifndef COORDINATOR_H
#define COORDINATOR_H
#include "contact.h"
#include "Date.h"
#include "room.h"

class coordinator {
public:
    coordinator(room roomArr, meeting meetings);
    ~coordinator();
    int searchRoom(room& roomName);
    int searchContact(int id);

private:
    room
    coordinator(const coordinator& coordinator);
    coordinator& operator=(const coordinator& coordinator);
    }


#endif // COORDINATOR_H
