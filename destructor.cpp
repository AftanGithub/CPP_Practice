#include <iostream>

using namespace std;

int count =0;
class num{


public:
    num(){
        count +=1;
        cout<<"This is when constructor is called for object"<<count<<endl;

    };

    ~num(){
        cout<<"This is when destructor is called for object"<<count<<endl;
        count -=1;
    };


};

int main(){
    cout<<"Entering main func"<<endl;

    num n1;

    {

        cout <<"Entering in a block "<<endl;
        num n1,n2;
        cout <<"Exiting the block"<<endl;
    }

    cout <<"Back to main menu"<<endl;


return 0;
}

