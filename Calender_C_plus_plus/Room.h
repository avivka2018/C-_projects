#ifndef ROOM_H
#define ROOM_H

class Room {
public:
    Room (const string& roomName,const string& roomLocation);
    ~Room();

private:
    string m_roomName;
    string m_roomLocation;
    //string createFrom(const char* str)
    Room(const room& room);
    Room& operator=(const room& room);


};

#endif // ROOM_H
