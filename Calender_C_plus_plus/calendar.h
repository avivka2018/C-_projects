#ifndef CALENDAR_H
#define CALENDAR_H
#inclde "coordinator.h"
#inclde "configurationManeger.h"
#inclde "Year.h"

class calendar {
public:
    calendar();
   ~calendar();
// create meeting
    int changeMeetingRoom(const room& roomName);
    int addMeetingAttendees(const string& attendees);
    int removeMeetingAttendees(const string& attendees);
    int searchMeeting(const string& meetingName, const contact& orginazier,const Date& date);


private:
    calendar(const calendar& calendar);
    calendar& operator=(const calendar& calendar);
    }

};

#endif // CALENDAR_H
