#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }
    // getter and setters -  if var health is private but we want to access it so we can use getter method

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main()
{
    
    //static allocation
    Hero Ironman;
    cout<<"Ironman health is "<<Ironman.getHealth()<<endl;
    cout<<"Ironman level is "<<Ironman.level<<endl;
    
   //dynamic allocation
    Hero *b = new Hero;
    cout << "health is: " << (*b).getHealth() << endl;  
    cout << "Level is: " << (*b).level<< endl;
    
    //this can also be written as:
    cout << "health is: " << b->getHealth() << endl;  
    cout << "Level is: " << b->level<< endl;

}