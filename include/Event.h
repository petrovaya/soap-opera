#ifndef SOAP_OPERA_PROJECT_EVENT_H
#define SOAP_OPERA_PROJECT_EVENT_H
#include "Character.h"
#include <iostream>
#include <string>
class Event {
    Character* c;
    int type; // integer numeration for each event name 1 - murder, 2 - love, 3 -....
    int num_of_characters;
    std::string name;
    std::string description; // explanation needed

public:
    Event(Character* _c, int _num, std::string _name);
    ~Event();
    void changeRelations(Character* _c, int _num, int _type); // changes the relation between the characters involved in the event
    void print();
};


#endif //SOAP_OPERA_PROJECT_EVENT_H
