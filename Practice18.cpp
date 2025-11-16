//INHERITENCE

#include <iostream>
using namespace std;

class Human {
   
   public :
    int height ;
    int weight ;
    int age ;
    
    public:
     int getage(){
        return this->age;  
     }
     
     void setweight(int w){
         this->weight = w ;
     }
    
};
//class | name : mode| parent class name
class Male : public Human {
   public:
    string color;
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};


int main() {
    Male m;
    cout<<"AGE"<<m.age<<endl;
    cout<<"WEIGHT"<<m.weight<<endl;
    cout<<"HEIGHT"<<m.height<<endl;
    cout<<"COLOR"<<m.color<<endl;
    m.setweight(40);
    cout<<"WEIGHT"<<m.weight<<endl;
    m.sleep();
    
}

//OUTPUT:-
// AGE-1355971720
// WEIGHT1819242352
// HEIGHT1600677166
// COLOR
// WEIGHT40
// Male Sleeping
