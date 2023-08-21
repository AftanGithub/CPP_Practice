#include <iostream>
using namespace std;

//program to show use of inline function
inline int product(int a,int b){
    return a*b;
}

int main(){
    int a,b;

    cout<<"Enter value for a and b: "<<endl;
    cin>>a>>b;
    cout<<"The Product of a and b is "<<product(a,b)<<endl;

return 0;
}
