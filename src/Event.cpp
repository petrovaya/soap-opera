#include "Event.h"
#include "Character.h"
Event::Event(Character* _c, int _num, std::string _name) {
    num_of_characters = _num;
    c = new Character [num_of_charecters];
    for(int i = 0; i < num_of_characters; i++)
        c[i] = _c[i];
    name = _name;
    if(name == "murder") type = 1;
    if(name == "love") type = 2;
    //...
}
void Event::print() {

}

void Event::changeRelations(Character* _c, int _num) {
    // change the levels of sympathy, hatred, attraction concerning the type
}

Event::~Event() {
    delete[] c;
}
