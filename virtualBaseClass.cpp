#include <iostream>

using namespace std;


class Student{
protected:
    int roll_no;
public:
    void setRollNo(int n){
        roll_no = n;
    };

    void getRollNo(void){
        cout<<"Your Roll no is : "<<roll_no<<endl;
    }

};


class Test:virtual public Student{
protected:
    float maths,physics;

public:
    void setMarks(float m1,float m2){
        maths = m1;
        physics = m2;
    };

    void getMarks(void){
        cout <<"Your Marks are:"<<endl
             <<"Maths: "<<maths<<endl
             <<"Physics: "<<physics<<endl;
    }

};


class Sports:virtual public Student{
protected:
    float score;

public:

    void setScore(float sc){
        score = sc;
    };

    void print_score(void){
        cout<<"Your PT score is : "<<score<<endl;
    }

};


class Result: public Test,public Sports{
private:
    float total;

public:
    void display(void){
        total = maths + physics + score;
        getRollNo();
        getMarks();
        print_score();
        cout<<"Your Total Score is: "<<total<<endl;

    }

};


int main(){
    Result aftan;
    aftan.setRollNo(7);
    aftan.setMarks(88.5,89.2);
    aftan.setScore(9);
    aftan.display();
return 0;
}
