#include<iostream>

using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the value of n1: \n"; //<< Insertion operator
    cin>>n1; // >> extraction operator

    cout<<"Enter the value of n2: \n";
    cin>>n2;

    int sum= n1+n2;
    cout<<"the value of sum is "<< sum;
    
    return 0;

}