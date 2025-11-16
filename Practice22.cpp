// HEIRARCHIAL INHERITENCE : one class serve as parent class for more than one class

#include <iostream>
using namespace std;

class a{
  public:
   void func1(){
       cout<<"F1"<<endl;
   }
};

class b:public a{
  public:
   void func2(){
       cout<<"F2"<<endl;
   }
};

class c: public a{
    public:
     void func3(){
       cout<<"F3"<<endl;
   }
};

int main() {
       a obj1;
       obj1.func1();
       
       b obj2 ;
       obj2.func2();
       obj2.func1();
       
       c obj3;
       obj3.func1();
       obj3.func3();
    
    return 0;
}

//OUTPUT:-
// F1
// F2
// F1
// F1
// F3
