#include <iostream>

using namespace std;

class Complex{
    int a,b;

public:
    Complex(int, int);

    void printNumber(void){
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }

};


Complex::Complex(int x,int y){
    a=x;
    b=y;

}




int main(){
   //implicit call
   Complex a(5,7);

   //explicit call
   Complex b= Complex(7,8);

   a.printNumber();

   b.printNumber();



return 0;
}
