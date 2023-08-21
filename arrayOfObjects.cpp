#include <iostream>

using namespace std;


class Employee{
    int id;
    string name;

public:
    void setData(void){
        cout <<"Enter Id of employee: "<<endl;
        cin>>id;
        cout<<"Enter name of Employee: "<<endl;
        cin>>name;

    }

    void getData(void){
        cout<<"Employee ID: "<<id<<endl;
        cout <<"Employee name: "<<name<<endl;
    }



};


int main(){
   // Employee ram,ajay,aman,radha;
   // ram.setData();
   // ram.getData();
   Employee sales[4];

   for(int i=0;i<4;i++){
    cout<<"====== Enter Details of Employee No. "<<i+1<<" ======= "<<endl;
    sales[i].setData();
   };

   for(int i=0;i<4;i++){
    cout<<"Employee No. "<<i+1<<" Details "<<endl;
    sales[i].getData();
   };


return 0;
}

