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
    Hero Ironman;
    cout<<"Ironman health is "<<Ironman.getHealth();
    // Ironman.health = 80;

    // to set value use setter 
    Ironman.setHealth(80);

    Ironman.level = 'A';
    cout << "health is: " << Ironman.getHealth() << endl;
    cout << "Level is: " << Ironman.getLevel() << endl;
}