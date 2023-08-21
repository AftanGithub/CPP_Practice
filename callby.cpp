#include <iostream>

using namespace std;

//call by value: this will not swap numbers
void swap(int a,int b){
int temp = a;
a = b;
b = temp;

}

//call by reference using pointer: this will swap numbers
void swapUsingPointer(int *a,int *b){
int temp = *a;
*a = *b;
*b = temp;

}

// call by reference using c++ reference variable: it will also work
void swapUsingReferenceVar(int &a,int &b){
int temp = a;
a = b;
b = temp;

}





int main(){
int x=5,y=4;

cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
//swap(x,y);
//swapUsingPointer(&x,&y);
swapUsingReferenceVar(x,y);
cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;


return 0;
}
