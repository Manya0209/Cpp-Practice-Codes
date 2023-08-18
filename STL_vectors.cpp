#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){ 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);    
    vec1.pop_back(); //remove one element from back
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,6,5); //here 6 represents the number of times you want to add 5 
    //for inserting at 2nd position, write iter+1
    display(vec1);
    return 0;
}