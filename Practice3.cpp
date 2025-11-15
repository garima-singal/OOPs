//Getter Setter 
//Static - Dynamic Memory Allocation


#include <iostream>
using namespace std;

class Hero{
    private:
   int health;
   
    public:
   char level;
   
   int gethealth(){
       //private property but can be accessed using getter - setter 
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
   Hero h1; //Static allocation

   cout<<"Level:"<<h1.level<<endl;
   cout<<"Health:"<<h1.gethealth()<<endl;

   h1.sethealth(40);
   h1.setlevel('B');
    cout<<"Level:"<<h1.level<<endl;
   cout<<"Health:"<<h1.gethealth()<<endl;
   
   Hero*h2 = new Hero; //dynamic allocation

   cout<<"level:"<< (*h2).level <<endl;
   cout<<"health:"<< (*h2).gethealth() <<endl;
   //another way
   cout<<"level:"<< h2->level <<endl;
   cout<<"health:"<< h2->gethealth() <<endl;

   h2->sethealth(20);
   h2->setlevel('A');
   cout<<"level:"<< h2->level <<endl;
   cout<<"health:"<< h2->gethealth() <<endl;
   

    return 0;
}



//OUTPUT
// Level:
// Health:1
// Level:B
// Health:40
// level:
// health:0
// level:
// health:0
// level:A
// health:20
