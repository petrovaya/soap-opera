#ifndef CHARACTER_H
#define CHARACTER_H

const int MAX = 40;
class Character
{
    private:
        
        string name [MAX];
        int age;

    public:
        void setName(string setName1){
            name = setName1;
        }

        string getName(){
            return name;
        }

        void setAge(int setAge1){
            age = setAge1;
        }

        int getAge(){
            return age;
        }

        bool isGoodPerson ()

        Character();
       ~Character();



};

#endif // CHARACTER_H
