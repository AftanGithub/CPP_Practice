#include <iostream>

using namespace std;


class Student{

private:
    int marks;
    string grade;

public:
    int rollno,age;
    string name,course;

    void increaseMarksByTen();

   void setData(int rollNo, int age, string name, string course, string grade, int marks) {
    rollno = rollNo;
    this->age = age;
    this->name = name;
    this->course = course;
    this->grade = grade;
    this->marks = marks;
}

    string getGrade(){
        return grade;
    };

    int getMarks(){
        return marks;
    }



};

void Student::increaseMarksByTen(){
    marks=marks+10;
}


int main(){
    Student std1;
    std1.setData(1,18,"Raj","BCA","A+",90);
    cout<<std1.name<<" whose roll no is "<<std1.rollno<<" is in "<<std1.course<<" with "<<std1.getGrade()<<" and "<<std1.getMarks()<<" marks!"<<endl;
    cout<<std1.name<<" is "<<std1.age<<" old "<<endl;
    std1.increaseMarksByTen();
    cout<<"Marks After an Update: "<<std1.getMarks()<<endl;


return 0;
}
