#ifndef MEETING_H
#define MEETING_H
#include "Date.h"
#include "room.h"
#include "contact.h"

class Meeting {
public:
    Meeting (const string& meetingName,const room& roomName, const contact& orginazier,const contact& attendees,const Date& date);
    ~Meeting();
//add / remove move?
private:
    string m_meetingName;
    room m_roomName;
    contact m_orginazier;
    contact m_attendees; //????
    Date m_meetingDate;

    Meeting(const meeting& meeting);
    Meeting& operator=(const meeting& meeting);

};

#endif // MEETING_H
