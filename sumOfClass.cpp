#include <iostream>

using namespace std;

class Y;
class X{
    int a;
    friend int Sum(X,Y);

public:
    void setData(int n){
        a = n;
    }

};


class Y{
    int a;
    friend int Sum(X,Y);
public:
    void setData(int n){
        a = n;
    }

};


int Sum(X o1, Y o2){

     return (o1.a + o2.a);

}

int main(){
   X c1;
   Y c2;
   c1.setData(4);
   c2.setData(5);
   int result = Sum(c1,c2);

   cout<<"The sum of Number of class is: " <<result<<endl;


return 0;


}
