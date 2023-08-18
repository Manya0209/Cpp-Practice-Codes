#include<iostream>
#include<string>
#include<map>
using namespace std;

//map is an associative container
int main(){
map<string, int> marksmap;
marksmap["rohan"]= 25;
marksmap["rahul"]= 56;
 map<string, int> :: iterator it;
 for(it=marksmap.begin(); it!=marksmap.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
 }
 cout<<"the size of map is "<<marksmap.size()<<endl;
 cout<<"the maximum size of map is "<<marksmap.max_size()<<endl;
 cout<<"the empty's return value of map is "<<marksmap.empty()<<endl;
 return 0;
}