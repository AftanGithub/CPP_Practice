#include <iostream>
using namespace std;

//program to show use of recursion by finding factorial

int factorial(int n){

    if(n<=1){
        return 1;
    }

    return n*factorial(n-1);

};

// step by step explanation of factorial(4)
//f = 4 * factorial(3)
//f = 4*3*factorial(2)
//f = 4*3*2*factorial(1)
// f = 4*3*2*1 = 24

int main(){
  int n;

  cout<<"Enter a Number for factorial: "<<endl;
  cin>>n;
  cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;

return 0;
}

