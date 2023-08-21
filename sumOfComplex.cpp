
#include <iostream>

using namespace std;


class complex{
    int a,b;


public:
    void setData(int v1,int v2){
       a=v1;
       b=v2;
    }

    void sumOfComplex(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber(void){
       cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }



};


int main(){
    complex c1,c2,c3;

    c1.setData(2,3);
    c1.printNumber();
    c2.setData(3,4);
    c2.printNumber();
    //passing objects as function parameter
    c3.sumOfComplex(c1,c2);
    c3.printNumber();



return 0;
}

