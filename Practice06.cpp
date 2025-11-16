//COPY CONSTRUCTOR


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
// this->  0x7ffc292cdd48
// 40
// C
