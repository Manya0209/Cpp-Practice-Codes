#include<iostream>
using namespace std;

template <class T1, class T2>
class sample{
    T1 data1;
    T2 data2;
    public:
    sample(T1 a, T2 b){
        data1= a;
        data2= b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};

int main(){
   sample<int, char> obj(2, 'c');
   obj.display();
   return 0;
}