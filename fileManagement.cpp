#include <iostream>
#include <fstream>


using namespace std;




int main(){
    string str = "This is coming from c++ program by aftan!";
    string str2;
    //writing to file
    //ofstream out("sample.txt");
    //out<<str;

    //reading from file
    ifstream in("sample.txt");
    //in>>str2; for first word
    getline(in,str2); //for full line

    cout<<str2;

return 0;

}
