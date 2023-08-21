#include <iostream>
#include <cmath>
using namespace std;


class Point;




class Point{
    int x,y;
    friend float findDistance(Point,Point);
public:
    Point(int, int);

    void displayPoint(void){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }

};


Point::Point(int a,int b){
    x=a;
    y=b;

}


//finding distance between two points

float findDistance(Point o1,Point o2){
    int xResult = o2.x - o1.x;
    int yResult = o2.y - o1.y;
    int internal = (xResult * xResult) + (yResult * yResult);

    float result = sqrt(internal);
    return result;
}




int main(){
  Point p(2,3);
  Point q(5,8);

  p.displayPoint();
  q.displayPoint();

  float result = findDistance(p,q);
  cout<<"The distance between above point is : "<<result<<endl;


return 0;
}

