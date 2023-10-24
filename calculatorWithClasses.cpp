#include <iostream>
#include <math.h>

using namespace std;

class simpleCalculator {
protected:
    int a,b,result;

public:
    void setNum(int x,int y){
        a = x;
        b = y;
    };

    void sum(){
        result =  a + b;
    };

    void subtract(){
        result =  a - b;
    };

    void multiply(){
        result =  a * b;
    };

    void divide(){
        result =  a / b;
    };

    void displayResult(){
        cout<<"The result is : "<<result<<endl;
    }

};


class scientificCalculator:public simpleCalculator{

public:
    void Power(void){
        result = pow(a,b);
    }

    void Sine(void){
        result = sin(a);
    }

    void Cos(void){
        result = cos(a);
    }

    void Tan(void){
        result = tan(a);

    }
};

class hybridCalculator:public scientificCalculator{



};

int main(){
    simpleCalculator s1;
    scientificCalculator s2;
    hybridCalculator
    s1.setNum(5,8);
    s1.subtract();
    s1.displayResult();

    s2.setNum(45,60);
    s2.Sine();
    s2.displayResult();


return 0;
}

