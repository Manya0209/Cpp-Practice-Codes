#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
    test(int i, int j) : a(i), b(j)
    //test(int i, int j) : a(i), b(i + j)
    //test(int i, int j) : a(i), b(a + j)
    //test(int i, int j) : b(j), a(j + b)---> will not work as a is initialised first

    {
        cout<<"constructor executed"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};

int main(){
    test t(4,8);
    return 0;
}