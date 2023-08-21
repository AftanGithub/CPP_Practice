
#include <iostream>
using namespace std;

// program to show function overloading

int sum(int a,int b){

return a+b;
}


int sum(int a,int b,int c){
return a+b+c;
}

int main(){
int a=3,b=6,c=5;

cout<<"Sum of a and b is "<<sum(a,b)<<endl;
cout<<"Sum of a,b and c is "<<sum(a,b,c)<<endl;

return 0;
}
