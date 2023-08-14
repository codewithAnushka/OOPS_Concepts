#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

Hero(){
    cout<<"Constructor called "<<endl;
}

//parametrised constructor
Hero(int health ){
    this -> health = health;
}
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
    //object created statically
    cout<<"Hi "<<endl;
    Hero Ironman;
    cout<<"hello"<<endl;
   

//obj created dynamically
Hero *h = new Hero();
}