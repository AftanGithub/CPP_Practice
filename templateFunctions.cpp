#include <iostream>

using namespace std;


//using same function for multiple parameteres

template <class T1,class T2>
float findAverage(T1 a,T2 b){
    float avg = (a+b)/2;

    return avg;

}


template <class T>
void swapNum(T &a,T &b){
    T temp = a;
    a=b;
    b=temp;


}

int main(){
    int a1 = findAverage(10,8);
    cout<<"Average a1 = "<<a1<<endl;
     float a2 = findAverage(5.8,15.8);
    cout<<"Average a2 = "<<a2<<endl;

    int x = 6;
    int y = 10;
    cout<<"Before Swap: "<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    swapNum(x,y);
     cout<<"After Swap: "<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;


return 0;
}
