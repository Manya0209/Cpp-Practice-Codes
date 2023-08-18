#include<iostream>
using namespace std;

template <class T>
class sample{
    public:
    T data;
    sample(T a){
        data= a;
    }
    void display();
};

template <class T>
void sample<T>:: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"i am func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"i am templatised func() "<<a;
}

int main(){
    sample<float> h(4.5);
    cout<<h.data<<endl;
    h.display();
    func(4); //exact func is given high priority
    func(5.6);
    return 0;
}