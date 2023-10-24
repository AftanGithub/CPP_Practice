#include <iostream>

using namespace std;

//adding default data types
template <class T1=int,class T2=char>
class myClass{

public:
    T1 data1;
    T2 data2;

    myClass(T1 a,T2 b){
        data1 = a;
        data2 = b;
    };

    void display(){
        cout<<"data1 = "<<data1<<" data2 = "<<data2<<endl;
    }

};

int main(){

     myClass<int,float> obj1(5,1.7);
    myClass<float,char> obj2(5.8,'a');
     myClass <> obj3(1,'b');
    obj1.display();
     obj2.display();
     obj3.display();
return 0;

}
