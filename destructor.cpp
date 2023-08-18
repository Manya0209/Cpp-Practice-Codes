#include<iostream>

using namespace std;
int count=0;

//destructor never takes an argument nor return any value

class num{
    public:
    num(){
        count++;
        cout<<"this is the time my constructor is called for obeject no."<<count<<endl;
    }
    ~num(){
         cout<<"this is the time my destructor is called for obeject no."<<count<<endl;
         count--;
    }
};

int main(){
    cout<<"we are in main"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two new objects n2 and n3"<<endl;
        num n2, n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main function"<<endl;
    return 0;
}