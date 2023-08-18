#include<iostream>
using namespace std;

class item{
    int id,price;
    public:
    void setdata(int a, int b){
        id= a;
        price= b;
    }
    void getdata(void){
        cout<<"code of this item is "<<id<<endl;
        cout<<"price for this item is "<<price<<endl;
    }
};

int main(){
    int size= 3;
    item *ptr = new item[size];
    int i,p,q;

    for(i=0; i<size; i++){
        cout<<"enter code and price for the item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    item *ptrtemp= ptr;
    for(i=0; i<size; i++){
        cout<<"item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}