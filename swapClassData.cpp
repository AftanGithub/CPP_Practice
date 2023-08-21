#include <iostream>

using namespace std;

class c2;
class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
public:
    void intData(int a){
        val1 = a;
    }


    int displayInt(void ){
        return(val1);
    }

};


class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
public:
    void intData(int b){
        val2 = b;
    }


    int displayInt(void ){

       return(val2);
    }

};


void exchange(c1 &x,c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

};



int main(){

    c1 o1;
    c2 o2;

    o1.intData(5);
    o2.intData(3);
    cout<<"Before swap: "<<endl;
    cout<<"val1 data: "<<o1.displayInt()<<endl;
    cout<<"val2 data: "<<o2.displayInt()<<endl;
    exchange(o1,o2);
    cout<<"-----------------------------"<<endl;
    cout<<"After swap: "<<endl;
    cout<<"val1 data: "<<o1.displayInt()<<endl;
    cout<<"val2 data: "<<o2.displayInt()<<endl;

return 0;
}
