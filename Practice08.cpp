// default copy constructor =>shallow copy 


#include <iostream>
#include <cstring>
using namespace std;

class Hero{
   private:
   int health;
   
   public:
   char level;
   char *name ;
   
   Hero(){
       cout<<"Simple Constructor Called"<<endl;
       name = new char[100];
   }
   
   Hero(int health,char level){
       //this is the pointer to current object Hero
       cout<<"this->  "<<this<<endl;
       this->health = health ;
       this->level = level;
   }
   
   //copy constructor
   //pass by reference
//   Hero(Hero& temp){ 
//       cout<<"Copy Constructor Called"<<endl;
//       this->health = temp.health;
//       this->level = temp.level;
//   }
   
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
   void setname(char name[]){
       strcpy(this->name , name);
   }
   
   void print(){
       cout<<this->name<<endl;
       cout<<this->health<<endl;
       cout<<this->level<<endl;
   }
   
};

int main() {
   
  Hero h1 ;
  h1.sethealth(50);
  h1.setlevel('D');
  char name[10] = "Garima";
  h1.setname(name);
  
  h1.print();
  
  Hero h2(h1);
  h2.print();
  
  h1.name[0] = 'S';
  h1.print();
  h2.print();
  
   //h1 change kra tha pr h2 bhi change ho gya
   //shalow copy : same memory ko access kr rhe ho 2 alag naam se
   
    return 0;
}


//OUTPUT:-
// Simple Constructor Called
// Garima
// 50
// D
// Garima
// 50
// D
// Sarima
// 50
// D
// Sarima
// 50
// D
