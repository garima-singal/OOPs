//static function

#include <iostream>
#include <cstring>
using namespace std;

class Hero{
   private:
   int health;
   
   public:
   char level;
   char *name ;
   
   //static keyword : aisa data member create krta hai jo class ko 
   //belong krta hai. 
   //access krne ke liye object bnane ki need nhi hoti. 
   static int timetocomplete;
   
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
  static int random(){
    //   cout<<this->health<<endl;
    //   cout<<health<<endl;
    
    //only access static member 
    return timetocomplete;
  }
   
   //destructor
   ~Hero(){
       cout<<"Destructor called"<<endl;
   }
   
};

int Hero::timetocomplete=5; //initialise
// :: -> scope resolution operator 

int main() {
   cout<<Hero::random()<<endl; // accessing without making object
   
}


//OUTPUT:-
//5