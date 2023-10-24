#include <iostream>

using namespace std;

class Base1{
    int d1;

public:
    Base1(int i){
        d1 = i;
        cout<<"Base1 Constructor Called!"<<endl;
    }

    void printData1(void){
        cout<<"The data1 = "<<d1<<endl;
    }

};

class Base2{
    int d2;

public:
    Base2(int i){
        d2 = i;
        cout<<"Base2 Constructor Called!"<<endl;
    }

    void printData2(void){
        cout<<"The data2 = "<<d2<<endl;
    }

};


class Derived:public Base1,virtual public Base2{
    int derived1,derived2;

    public:
        Derived(int a,int b,int c,int d):Base1(a),Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived Constructor called!"<<endl;
        }

    void printDerived(void){
        cout<<"The derived1 = "<<derived1<<" and derived2 = "<<derived2<<endl;
    }
};


int main(){
    Derived d(1,2,3,4);
    d.printData1();
    d.printData2();
    d.printDerived();

return 0;
}
