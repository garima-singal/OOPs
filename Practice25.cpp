//Function Overloading 

#include <iostream>
using namespace std;

class a{
    public:
    
    void sayhello(){
        cout<<"Hello GS"<<endl;
    }
    void sayhello(string name){
        cout<<"Hello"<<name<<endl;
    }
    
    //same function cant be redeclared ...thats why hmne argument add kr di 
    // return type change krne se bhi overloading nhi ho paegi 
    //Function overloading krni hai to hme input arguments mai change krna pdega ....
};

int main() {
    
   a obj1 ; 
   obj1.sayhello();

}


//OUTPUT:-
// Hello GS