#include <iostream>
using namespace std;

      //creation of class named Hero
class Hero{
      //properties of class
      //by deault properties are private 
   int health;
};
       //creation of class named ABC
class ABC {
      //empty class
};

int main() {
    Hero h1; //creation of object
    ABC a1;
    cout<<"size : " <<sizeof(h1)<<endl;
    cout<<"size : " <<sizeof(a1)<<endl;
    return 0;
}


//OUTPUT:
// size : 4
// size : 1