//DESTRUCTOR : to deallocate memory 

//no return type 
//no i/p parameters 
//name is same as of class name




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
   
//   copy constructor
  Hero(Hero& temp){ 
      //Deep Copy 
      char* ch = new char[strlen(temp.name)+1];
      strcpy(ch,temp.name);
      this->name = ch;
      
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
   void setname(char name[]){
       strcpy(this->name , name);
   }
   
   void print(){
       cout<<this->name<<" ";
       cout<<this->health<<" ";
       cout<<this->level<<endl;
   }
   
   //destructor
   ~Hero(){
       cout<<"Destructor called"<<endl;
   }
   
};

int main() {
   
  Hero h1 ; //static allocation:apne aap destructor call ho jaega ! 
  
  Hero *h2= new Hero(); // dynamic allocation:hme manually call krna pdta hai destructor !
  delete h2;
  
}


//OUTPUT:-
// Simple Constructor Called
// Simple Constructor Called
// Destructor called
// Destructor called
