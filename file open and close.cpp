#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("hello.txt");
    out<<"this is me\n";
    out.close();

    ifstream in;
    string st;
    in.open("hello.txt");
    //in>>st;
    //cout<<st;

    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}