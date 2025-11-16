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
    cout<<"Size of h1 is : "<<sizeof(h1)<<endl;
    
    return 0;
}


//OUTPUT :
// Health : 0
// Level : 
// Health : 70
// Level : A
//Size of h1 is : 8


//but size should be 5 because there is 1 character(size = 1) 
// and 1 integer value(size=4) in it 



//                     CONCEPT OF PADDING :

//padding refers to the extra unused bytes inserted by the compiler
//inside a class/struct to satisfy alignment requirements of the CPU. 
//Padding affects the memory layout and size of objects.

//Key Points:
//Padding happens automatically due to alignment.
// Actual size of a class ≠ sum of sizes of its members.
// Rearranging members can reduce padding.
// Use #pragma pack(1) to disable padding (⚠️ may harm performance).

// Padding affects:
// Object size
// Memory footprint of large arrays of objects
// Memory layout important for serialization/low-level code.



//                    CONCEPT OF GREEDY ALLIGNMENT

//Greedy Alignment (or Greedy Padding) in C++ refers to the compiler’s strategy 
// of aligning class/struct members in the most efficient way by inserting 
// padding as needed to satisfy alignment requirements.

// It is called greedy because the compiler greedily aligns every member to its
//  required boundary even if it creates unused gaps.