#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

//function objects/functors(): wrapped in a class so that is is available like an object
int main(){
    int arr[]= {1,56,4,78,45,6};
    sort(arr, arr+5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+6, greater<int>());
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}