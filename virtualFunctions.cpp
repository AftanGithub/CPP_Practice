
#include <iostream>

using namespace std;

class BaseClass{
public:
    int base_var;
    //below virtual function will not run now from base class pointer instead inherited display func will run
    virtual void display(){
        cout<<"1. The base_var from base class = "<<base_var<<endl;
    }

};


class DerivedClass : public BaseClass{
public:
    int derived_var;
    void display(){
        cout<<"2. The base_var from Derived class = "<<base_var<<endl;
        cout<<"2. The derived_var from Derived class = "<<derived_var<<endl;
    }

};

int main(){
    BaseClass *base_class_pointer;
    DerivedClass *derived_class_pointer;
    DerivedClass obj1;
    base_class_pointer = &obj1;
    derived_class_pointer = &obj1;

    base_class_pointer->base_var = 10;
    derived_class_pointer->derived_var = 100;
   // derived_class_pointer->display();
    base_class_pointer->display();

return 0;
}
