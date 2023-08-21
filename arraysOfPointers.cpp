#include <iostream>

using namespace std;

int main(){
    int marks[5] = {25,56,23,55,32};
    int *p = marks;

    cout << "The value of [0] is = "<<*p<<endl;
    cout << "The value of [1] is = "<<*(p+1)<<endl;

return 0;
}



