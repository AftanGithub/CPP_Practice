#include <iostream>

using namespace std;



class Complex{
    int r,i;

public:

    void setData(int a,int b){
        r = a;
        i = b;
    };

    void getData(void){
        cout<<"Real part = "<<r<<endl;
        cout<<"Imaginary part = "<<i<<endl;

    }

};

int main(){
    Complex c1;
    c1.setData(2,3);
    c1.getData();
    Complex *ptr = &c1;
    //(*ptr).setData(35,10); also a way
    ptr->setData(10,30);

    //(*ptr).getData(); also a way
    ptr->getData();

return 0;
}

