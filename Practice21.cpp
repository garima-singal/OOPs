// MULTIPLE INHERITENCE

#include <iostream>
using namespace std;

class animal{
    public:
     int age;
     int weight;
     
     public:
      void bark(){
          cout<<"BARKING"<<endl;
      }
};

class human{
   public :
   string color;
   
    public:
      void speak(){
          cout<<"SPEAKING"<<endl;
      }
};

class hybrid:public animal , public human{
    
};


int main() {
  
  hybrid h;
  h.speak();
  h.bark();
  
    
}

//OUTPUT:
// SPEAKING
// BARKING