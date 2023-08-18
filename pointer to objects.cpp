#include<iostream>
using namespace std;

class complex{
    int real, imag;
    public:
    void setdata(int a, int b){
        real = a;
        imag = b;
    }
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imag<<endl;
    }
};

int main(){
    complex c;
    complex *ptr= &c;
    c.setdata(1,4); 
    (*ptr).setdata(1,4); //is same as
    ptr->setdata(1,4);
    c.getdata();
    (*ptr).getdata(); //is as good as
    ptr->getdata();
    return 0;
}