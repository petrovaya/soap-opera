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
    // adding points to attraction, sympathy, hatred, concerning the type.
}
void Event::print() {
// no idea how we will transform murder/love to "Char1 killed Char2 / Char1 went to the cinema with Char2
}

void Event::changeRelations(Character* _c, int _num, int _type) {
    // change the levels of sympathy, hatred, attraction
}

Event::~Event() {
    delete[] c;
}
