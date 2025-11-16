//Parameterized Constructor


#include <iostream>
using namespace std;

class Hero{
   private:
   int health;
   
   public:
   char level;
   
   Hero(int health){
       //this is the pointer to current object Hero
       cout<<"this->  "<<this<<endl;
       this->health = health ;
   }
   
   int gethealth(){ 
       return health;
    }
   
   char setlevl(){
       return level;
   }
   
   void sethealth(int h){
       health=h;
   }
   
   void setlevel(int l){
       level = l;
   }
   
};

int main() {
   
   Hero h1(10); 
   cout<<"Address of h1 : "<<&h1<<endl;
   
    return 0;
}

//OUTPUT:
// this->  0x7ffc4199b1b8
// Address of h1 : 0x7ffc4199b1b8