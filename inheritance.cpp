#include <iostream>

using namespace std;

class Employee{

public:
    int id;
    float salary;

    Employee(int inpId){
        id = inpId;
        salary=35;
    };

    Employee(){};

};


class Programmer : public Employee{

public:
    int programmerCode;
    Programmer(int inpId){
        id = inpId;
        programmerCode = 9;
    };

    void getData(void){
        cout<<id<<endl;
    }


};


/*
NOTE:
public inheritance = Public members of base class becomes the public members of derived class;
private inheritance = Public members of base class becomes the private members of derived class;
Private members of base class never inherited;


*/

int main(){
    Employee raj(1),aman(2);
    cout<<raj.salary<<endl;
    cout<<aman.salary<<endl;
    Programmer aftan(1);
    aftan.getData();
return 0;
}
