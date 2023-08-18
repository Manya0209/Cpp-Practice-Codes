#include<iostream>
using namespace std;

template <class T1, class T2>
float funcavg(T1 a, T2 b){
    float avg= (a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a= funcavg(2,5);
    cout<<"value of avg of these numbers is "<<a;
    return 0;
}