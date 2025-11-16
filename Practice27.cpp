//RUN TIME POLYMORPHISM

#include <iostream>
using namespace std;

class animal{
  
  public:
   void speak(){
       cout<<"Speak"<<endl;
   }
};

class dog{
    public:
     void speak(){ //function overriding
         cout<<"Barking"<<endl;
     }
};

int main() {
    
  dog d;
  d.speak();

}


//OUTPUT:-
//Barking