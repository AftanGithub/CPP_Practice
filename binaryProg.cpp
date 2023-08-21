#include <iostream>
#include <string>

using namespace std;

class binary{
    private:
        string s;
        void check_bin(void);

public:
    void read(void);

    void ones_complement(void);
    void display(void);


};


void binary::read(void){

    cout<<"Enter a Binary Number: "<<endl;
    cin>>s;
    check_bin();
}


void binary::check_bin(void){

    for(int i=0;i<s.length();i++){

        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Number!"<<endl;
            exit(0);
        }

    }

}


void binary::ones_complement(void){
    for(int i=0;i<s.length();i++){

        if(s.at(i)=='0'){
            s.at(i)='1';

        }else{
            s.at(i) = '0';
        }

    }

}

void binary::display(void){
    cout<<"Binary Number: "<<s<<endl;

}


int main(){
    binary b;
    b.read();
    b.display();
    b.ones_complement();
    cout<<"---After Complement---"<<endl;
    b.display();


return 0;
}
