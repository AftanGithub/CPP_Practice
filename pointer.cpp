#include <iostream>

using namespace std;


int main(){
    int n = 5;
    int *p = &n;
    int **pp = &p;

    cout <<"The value of n = "<<n<<endl;
    cout <<"The address of n = "<<&n<<endl;

    cout <<"The value of pointer p = " <<p<<endl;
    cout <<"The actual value of pointer p = " <<*p<<endl;


    cout<< "The pointer to pointer pp address stored = "<<pp<<endl;
    cout << "The value of stored in pointer to pointer pp = "<<*pp<<endl;
    cout << "The value of value stored in pointer to pointer pp = "<<**pp<<endl;



return 0;
}
