#include<iostream>

using namespace std;
 class complex{
    int a;
    int b;
    public:
    void setnumber(int n1, int n2){
       a= n1;
       b= n2;
    }
    // Below line means that sum complex function is allowed to do anything with private members
    friend complex sumcomplex(complex c1, complex c2);
    void printnum(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
 };

    complex sumcomplex(complex c1, complex c2){
    complex c3;
    c3.setnumber((c1.a+c2.a),(c1.b+c2.b));
    return c3;
 }

 int main(){
    complex x, y, sum;
    x.setnumber(1,4);
    x.printnum();

    y.setnumber(5,2);
    y.printnum();

    sum= sumcomplex(x,y);
    sum.printnum();
    return 0;
 }

 /* Properties of Friend Functions
 1 Not in the scope of class
 2 Since it is not in the scope of class, it can't be called from object of that class. c1.sumcomplex() == Invalid
 3 can be invoked without the help of any object.
 4 Usually contains the object as arguments.
 5 Can be declared inside public or private section of the class.
 6 It cannot access any members directly by their names and need object_name.member_name to access any member.
 */
