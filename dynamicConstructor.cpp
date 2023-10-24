#include <iostream>

using namespace std;

class BankDeposit {
    float principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){};

    BankDeposit(float p, int y, int r);
    BankDeposit(float p, int y, float r);
    void show();
};

BankDeposit::BankDeposit(float p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < years; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(float p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < years; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show() {
    cout << endl << "The Principal Amount is " << principal << ", " << endl << "The final amount after " << years << " Years is " << returnValue << endl;
}

int main() {
    BankDeposit b1, b2, b3; // Declare BankDeposit objects
    float p, r;
    int y, R;

    cout << "Enter value for p, y, and r" << endl;
    cin >> p >> y >> r;

    b1 = BankDeposit(p, y, r);
    b1.show();

    cout << "Enter value for p, y, and R" << endl;
    cin >> p >> y >> R;

    b2 = BankDeposit(p, y, R);
    b2.show();

    return 0;
}
