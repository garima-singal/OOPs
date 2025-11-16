// MULTILEVEL INHERITENCE

#include <iostream>
using namespace std;

class animal{
    public:
     int age;
     int weight;
     
     public:
      void speak(){
          cout<<"SPEAKING"<<endl;
      }
};

class dog : public animal{
    
};

class germanshepher:public dog{
      
};


int main() {
  
    germanshepher g;
    g.speak();
    cout<<g.weight<<endl;
    
} 

//OUTPUT:-
//SPEAKING
//0