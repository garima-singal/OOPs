//CONSTRUCTOR
//invokes at object creation 
//no return type

//Default Constructor : Automatically gets created when we make a class.



#include <iostream>
using namespace std;

class Hero{
    private:
   int health;
   
    public:
   char level;
   
   //as soon as we make our own constructor , default constructor 
   //is not called ... our constructor gets called .
   Hero(){
       cout<<"Called Constructor"<<endl;
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
    cout<<"Hi"<<endl;
   Hero h1; 
   cout<<"Done"<<endl;
   
    return 0;
}


//OUTPUT:
// Hi
// Called Constructor
// Done