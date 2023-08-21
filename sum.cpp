#include <iostream>

using namespace std;

//function prototype

int sum(int,int);


int main(){
    int num1,num2;

    cout <<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout << "Sum of two numbers: "<<sum(num1,num2)<<endl;

return 0;

}


int sum(int a,int b){
int c;
c = a + b;

return c;

}

