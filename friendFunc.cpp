#include <iostream>

using namespace std;


class Complex {
    int a,b;
    friend int sumRealComplex(Complex, Complex);
public:
    void setData(int n1,int n2){
        a = n1;
        b = n2;
    }

    void printNum(void){
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }


};


int sumRealComplex(Complex o1,Complex o2){

    return (o1.a + o2.a);

}


int main(){
    Complex c1,c2;

    c1.setData(3,4);
    c1.printNum();

    c2.setData(4,2);
    c2.printNum();

    int result = sumRealComplex(c1,c2);
    cout<<"The sum of real part is "<<result<<endl;


return 0;


}
