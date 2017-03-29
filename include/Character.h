#ifndef CHARACTER_H
#define CHARACTER_H


class Character
{
    private:
        int MAX = 40;
        string name [MAX];
        int age;

    public:
        void setName(string set_name){
            name = set_name;
        }

        string getName(){
            return name;
        }

        void setAge(int set_age){
            age = set_age;
        }

        int getAge(){
            return age;
        }

        bool isGoodPerson ()

        Character();
        virtual ~Character();



};

#endif // CHARACTER_H
