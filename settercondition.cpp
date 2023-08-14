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
    // getter and setters -

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h, char name)
    {
        if (name == 'A')
        {
            health = h;
        }
    }
    void setLevel(char ch)
    {
        
        level = ch;
    }
};
int main()
{
    Hero Ironman;
    cout << "Ironman health is " << Ironman.getHealth();
    // Ironman.health = 80;

    // to set value use setter
    // Ironman.setHealth(80);  

    Ironman.level = 'A';
    cout << "health is: " << Ironman.getHealth() << endl;
    cout<<"Size of Ramesh is"
    cout << "Level is: " << Ironman.getLevel() << endl;
}