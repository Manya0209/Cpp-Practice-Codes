#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    //removing the elements from list
    //list1.pop_back();
    //display(list1);
    //list1.pop_front();
    //display(list1);
    //list1.remove(9);

    //sorting elements
    //list1.sort();

    //reversing the elemnts
    //list1.reverse();
    display(list1);
    
    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
    display(list2);

    list1.merge(list2);
    cout<<"after merging: ";
    display(list1);
    return 0;
}