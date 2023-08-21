#include <iostream>

using namespace std;


int main(){
    loop:
    int day;
    cout << "Enter a Day (1-7): "<<endl;
    cin >> day;
    if(day <=7 && day >=1){
        switch(day){

        case 1:
            cout << "It's SUNDAY have Fun bruh!" <<endl;
            break;
        case 2:
            cout << "It's MONDAY, Start your work day!" <<endl;
            break;
        case 3:
            cout << "It's TUESDAY, Nothing New Work again!" <<endl;
            break;
        case 4:
            cout << "It's WEDNESDAY, Same work today bruh!" <<endl;
            break;
        case 5:
            cout << "It's THURSDAY,Nope Nothing New!" <<endl;
            break;
        case 6:
            cout << "It's FRIDAY, Last Work day bruh!" <<endl;
            break;
        case 7:
            cout << "It's SATURDAY, Have Some fun with your buddies!" <<endl;
            break;

        }

    }else{
        cout << "Please Enter a Valid Range of day (1-7)!"<<endl;
        goto loop;
    }

return 0;
}
