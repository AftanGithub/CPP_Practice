
#include <iostream>
using namespace std;

//program to show use of default arguments
float getInterest(int money,float f=1.04){ //the default arguments should be at extreme right
    return money * f;
}

int main(){
   int money = 10000;

   cout<<"You have "<<money<<" Rs. in Your Bank, after 1 year it will be "<<getInterest(money)<<endl;
   cout<<"For VIP: It will be "<<getInterest(money,1.2)<<" Rs. After 1 year"<<endl;


return 0;
}
