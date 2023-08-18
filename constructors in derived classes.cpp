#include<iostream>
using namespace std;

/*
case1:
class b: public a{}
order of execution of constructor---> a() then b()

case2:
class a: public b, public c{}
order of execution of constructor---> b() then c() then a()

case3:
class a: public b, virtual public c{}
order of execution of constructor---> c() then b() then a()
*/

 class base1{
    int data1;
    public:
    base1(int i){
        data1= i;
        cout<<"base1 class constructor is called"<<endl;
    }
    void printbase1(void){
        cout<<"the value of data1 is "<<data1<<endl;
    }
 };

 class base2{
    int data2;
    public:
    base2(int i){
        data2= i;
        cout<<"base2 class constructor is called"<<endl;
    }
    void printbase2(void){
        cout<<"the value of data2 is "<<data2<<endl;
    }
 };

 class derived: public base1, public base2{
    int derived1, derived2;
    public:
    derived(int a, int b, int c, int d): base1(a), base2(b){
        derived1= c;
        derived2= d;
        cout<<"derived class constructor is called "<<endl;
    }
    void printderived(void){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;
    }
 };

 int main(){
    derived rohan(1, 2, 3, 4);
    rohan.printbase1();
    rohan.printbase2();
    rohan.printderived();
    return 0;
 }