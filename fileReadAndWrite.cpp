#include <iostream>
#include <fstream>

using namespace std;


int main(){
    string str;
    ofstream out("sample.txt");
    cout<<"Enter Your Text to write in a file: "<<endl;
    getline(cin,str);
    out<<str;
    out.close();

    ifstream in("sample.txt");

    getline(in,str);
    cout<<"Written String from file: "<<endl;
    cout<<str;
    in.close();


return 0;

}

