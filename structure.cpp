#include <iostream>
#include <cstring>

using namespace std;

typedef struct employee {
    int eid;
    char initial;
    char name[20];
    float salary;


} ep;

int main(){
   ep aftan;

   aftan.eid = 1;
   aftan.initial = 'A';
   strcpy(aftan.name, "Aftan Ahmad"); // Corrected the assignment of name using strcpy
   aftan.salary = 50000.00;


    cout << "EID = "<<aftan.eid<<endl;
    cout << "Initial = "<<aftan.initial<<endl;
    cout << "Name: " << aftan.name <<endl;
    cout << "Salary = "<<aftan.salary<<endl;

return 0;
}




