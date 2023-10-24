#include <iostream>

using namespace std;

class Student{
    protected:
        int rollNo;

    public:
        void setRollNo(int r){
            rollNo = r;
        }

        void getRollNo(void){
            cout<<"The roll no is "<<rollNo<<endl;
        }

};


class Exam:public Student{
protected:
    float maths,science;
public:
    void setMarks(float m,float s);
    void getMarks();

};

void Exam::setMarks(float m,float s){
    maths = m;
    science = s;
}

void Exam::getMarks(void){
    cout<<"The marks of maths is "<<maths<<endl;
    cout<<"The marks of science is "<<science<<endl;
}


class Result:public Exam{
public:
    void displayResult(void){
        cout<<"The result of Roll no "<<rollNo<<" is "<<(maths + science)/2<<"%"<<endl;
    }

};


int main(){
    Result aftan;
    aftan.setRollNo(1);
    aftan.getRollNo();
    aftan.setMarks(90.4,93.5);
    aftan.getMarks();
    aftan.displayResult();

return 0;
}


