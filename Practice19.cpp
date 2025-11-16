// SINGLE INHERITENCE

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


int main() {
  
    dog d;
    d.speak();
    cout<<d.age<<endl;
    
    return 0;
}


//OUTPUT:-
// SPEAKING
// 1