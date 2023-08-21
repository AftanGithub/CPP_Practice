#include <iostream>

using namespace std;

class Shop{

    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void){counter = 0;};
    void setData(void);
    void displayData(void);



};

void Shop::setData(void){
    cout<<"Enter id for the item "<<counter + 1<<": "<<endl;
    cin>>itemId[counter];
    cout<<"Enter price for item "<<counter + 1<<": "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop::displayData(void){

    for(int i=0;i<counter;i++){
        cout<<"The id and price of the item "<<i+1<<" is "<<itemId[i]<<"and "<<itemPrice[i]<<endl;
    }

}

int main(){
    int n;
    Shop myshop1;
    myshop1.initCounter();
    cout<<"How many items you want to enter: "<<endl;
    cin>>n;

    for(int i=0;i < n;i++){
        myshop1.setData();
    }

    myshop1.displayData();


return 0;
}
