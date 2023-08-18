#include<iostream>
using namespace std;
class complexno
{
    int real,imag;
    public:
    complexno()
    {
        real=0;
        imag=0;
    }
    complexno(int i)
    {
        real=i;
        imag=i;
    }
    complexno(int a, int b){
        real=a;
        imag=b;
    }
    void add(complexno c1,complexno c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i";
   }
};
int main()
{
    cout<<"\n\n program to find the addition of two complex numbers using constructor overloading ";
    int real,imag;
    cout<<"\n \n Enter a single value parts for real and imaginary  parts of first complex numbers " ;
    cin>>real;
    complexno c1(real);
    cout<<"\n first complex number is given by : ";
    c1.display();
    cout<<"\n\n Enter the differnt values of real and imaginary parts of second complex numbers";
    cin>>real>>imag;
    complexno c2(real,imag);
    cout<<"\n second complex number is given by : ";
    c2.display();
    complexno c3;
    cout<<"\n \n initially third complex number is : ";
    c3.display();
    cout<<"\n\nstoring the result of addition of first and second complex number into third.....";
    c3.add(c1,c2);
    cout<<"\n\n now third complex number is";

    c3.display();
    cout<<"\n";
    
    return 0;
}