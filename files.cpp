#include<iostream>
#include<fstream>
using namespace std;

/*
useful classes for working with files in c++:
1. fstream
2. ifstream --> derived from fstream
3. ofstream --> derived from fstream

to work with file, you will have to open it. primarily there are two ways:
1. using the constructor
2. using the member function open() of the class
*/

int main(){
    string st= "hello";
    string st2;
    //opening files using constructor and writing to it
    //ofstream out("samplefile.txt");
    //out<<st;
    
    //reading from it
    ifstream in("hello.txt");
    //in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}

