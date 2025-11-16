
#include <iostream>
using namespace std;

class Hero{
   private:
   int health;
   
   public:
   char level;
   Hero(){
       cout<<"Simple Constructor Called"<<endl;
   }
   
   Hero(int health,char level){
       //this is the pointer to current object Hero
       cout<<"this->  "<<this<<endl;
       this->health = health ;
       this->level = level;
   }
   
   //copy constructor
   //pass by reference
   Hero(Hero& temp){ 
       cout<<"Copy Constructor Called"<<endl;
       this->health = temp.health;
       this->level = temp.level;
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
   
   void print(){
       cout<<this->health<<endl;
       cout<<this->level<<endl;
   }
   
};

int main() {
   
   Hero h1 (40,'C');
   
    //   h2.health = h1.health;
    //   h2.level = h1.level;
    //  The above 2 lines can be written as a single line like :-
   Hero h2(h1);
   h2.print();
   
   
    return 0;
}

//OUTPUT
// this->  0x7ffd16dc7858
// Copy Constructor Called
// 40
// C