#include <iostream>
using namespace std;

class H{
    //can't be accessed ouside the class
   int health;
   char level;
};

class Hero{
   public:  // can be accessed outside the class 
   int health;
   char level;

};

int main() {
    Hero h1; //creation of object
    
    cout<<"Health : "<<h1.health<<endl;
    cout<<"Level : "<<h1.level<<endl;

    // dot(.) operater for accessing public 
    // properties in a class
    h1.health = 70;
    h1.level = 'A';

    cout<<"Health : "<<h1.health<<endl;
    cout<<"Level : "<<h1.level<<endl;
    
    return 0;
}


//OUTPUT :
// Health : 0
// Level : 
// Health : 70
// Level : A