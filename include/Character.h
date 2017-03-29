#ifndef CHARACTER_H
#define CHARACTER_H


class Character
{
    private:
        const int MAX = 40;
        string name [MAX];
        int age;

    public:
        void set_name(string setName){
            name = setName;
        }

        string get_name(){
            return name;
        }

        void set_age(int setAge){
            age = setAge;
        }

        int get_age(){
            return age;
        }

        bool isGoodPerson ()

        Character();
        ~Character();



};

#endif // CHARACTER_H
