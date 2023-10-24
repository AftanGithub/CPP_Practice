#include<iostream>


using namespace std;


class ShopItem{
    int id;
    float price;

public:
    void setData(int i,float p){
        id = i;
        price=p;
    };

    void getData(void){
        cout<<"Id: "<<id<<endl;
        cout<<"Price: "<<price<<endl;
    }


};


int main(){
int size = 3;
ShopItem *ptr = new ShopItem[size];
ShopItem *ptrTemp = ptr;

int id,i;
float price;

for(i=0;i<size;i++){
    cout<<"Enter Id and Price of Item no. "<<i+1<<endl;
    cin>>id>>price;
    ptr->setData(id,price);
    ptr++;
}

for(i=0;i<size;i++){
    cout<<"Item no. "<<i+1<<endl;
    ptrTemp->getData();
    ptrTemp++;
}







return 0;

}
