//Operator Overloading 

#include <iostream>
using namespace std;

class b{
    public:
     int x;
     int y;
    
    public:
     int add(){
         return x+y;
     }
     // syntax - return type|operator|operator|input parameters 
     void operator+ (b &obj){
         int value1 = this->x;
         int value2 = this->y;
         cout<<"output" <<value2-value1<<endl;
     }
     
   
};

int main() {
    
   b obj1,obj2;
   obj1.x=4;
   obj2.y=8;
   
   obj1+obj2; //addition operator ko subtraction operator bna diya.
   
    return 0;
}


//OUTPUT:
//4