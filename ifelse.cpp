#include <iostream>

using namespace std;

int main(){
    int age;

    cout << "What's your age?" << endl;
    cin >> age;

    if(age > 18){
        cout << "Woah, You're an Adult Man!"<<endl;
    }else{
        cout << "Hey Kiddo, You're a minor!" << endl;
    }

return 0;
}
