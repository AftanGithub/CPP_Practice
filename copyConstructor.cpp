#include <iostream>

using namespace std;

//demo of copy constructor

class Number{
    int a;

public:
    Number(){
        a=0;
    };

    Number(int n){
        a = n;
    };

    // Below is custom copy constructor, if its not available then compiler automatically gives us the default copy constructor

    Number(Number &obj){
        cout<<"Copy constructor is called"<<endl;
        a = obj.a;
    };

    void display(){
        cout<<"The number a is "<<a<<endl;

    }

};

int main(){

    Number x,y,z(45),z3;
    x.display();
    y.display();
    z.display();

    Number z1(z); //copy constructor called
    z1.display();

    Number z2 = z1; //copy constructor called
    z2.display();
    z3 = z1; //copy constructor will NOT be called
    z3.display();
return 0;


}

