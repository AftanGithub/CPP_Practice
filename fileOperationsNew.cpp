#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
string st;
//write operations
ofstream out;
out.open("sample.txt");
out<<"This is a sample text with open method!\n";
out<<"This is a line 2 of sample text with open method!\n";
out.close();

//read operations
ifstream in;
in.open("sample.txt");
while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}

return 0;

}
