#include <iostream>

using namespace std;


class Employee{
    int id;
    static int count;

public:
    void setData(void){
        cout <<"Enter Id of employee: "<<endl;
        cin>>id;
        count ++;
    }

    void getData(void){
        cout <<"The id of employee number "<<count<<" is "<<id<<endl;
    }


    static void getCount(void){
        cout<<"The count is "<<count<<endl;
    }


};

int Employee::count;

int main(){
    Employee ram,ajay;

    ram.setData();
    ram.getData();
    Employee::getCount();
    ajay.setData();
    ajay.getData();
    Employee::getCount();

return 0;
}

