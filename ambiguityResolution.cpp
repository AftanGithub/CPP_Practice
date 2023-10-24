#include <iostream>

using namespace std;

class Base1{

public:
    void greet(void){

        cout<<"Hello There!"<<endl;
    }

};


class Base2{

public:
    void greet(void){
        cout<<"Aur Sab Badhiya?"<<endl;
    }

};


class Derived:public Base1,public Base2{

public:
    //ambiguity resolution for greet method
    void greet(void){
        Base1::greet();
    }

};


int main(){
    Base1 o1;
    Base2 o2;
    Derived o3;

    o1.greet();
    o2.greet();
    o3.greet();
    return 0;
}
