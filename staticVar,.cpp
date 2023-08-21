#include <iostream>
using namespace std;

//program to show static variables
int product(int a,int b){

    static int c = 0; //this will be inititialized only once and on next call it will not be reinitialized
    c = c + 1; //this will execute on each call;
    return a*b + c;
}

int main(){
    int a,b;

    cout<<"Enter value for a and b: "<<endl;
    cin>>a>>b;
    cout<<"1. The Product of a and b is "<<product(a,b)<<endl;
    cout<<"2. The Product of a and b is "<<product(a,b)<<endl;
    cout<<"3. The Product of a and b is "<<product(a,b)<<endl;

return 0;
}
