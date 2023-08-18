#include<iostream>
using namespace std;

template< class T1= int, class T2= float, class T3= char>
class sample{
    public:
    T1 a;
    T2 b;
    T3 c;
    sample(T1 x, T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<c<<endl;
    }
};

int main(){
    sample<> h(1,1.4,'c');
    h.display();
    cout<<endl;
    sample<float, char, char> d(4.5, 'm', 'p');
    d.display();
    return 0;
}