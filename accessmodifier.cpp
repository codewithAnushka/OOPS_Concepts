#include<iostream>
using namespace std;

class Hero{
    public://kahi bhi access kr sakte ha class k andar bhi class k bahar bhi'
    int health;
    // private://only access inside class not outside class
    char level;

    void print(){
        cout<<level<<endl;
    }
};
int main(){
    Hero Ironman;
    Ironman.health = 80;
    Ironman.level = 'A';
    cout<<"health is: "<<Ironman.health<<endl;
    cout<<"Level is: "<<Ironman.level<<endl; 
}