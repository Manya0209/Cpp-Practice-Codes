#include<iostream>

using namespace std;
int main(){
    int a[3][3], b[3][3], R[3][3];
    cout<<"enter first matrix: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter second matrix: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>b[i][j];
        }
    }
    cout<<"first matrix is: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j];
        }
        cout<<" "<<endl;
    }
    cout<<"second matrix is: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<b[i][j];
        }
        cout<<" "<<endl;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            R[i][j]=0;
            for(int k=0; k<3; k++){
                R[i][j]= R[i][j] + (a[i][k]* b[k][j]);
            }
        }
    }
    cout<<"result of multiplying matrix a and b: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<R[i][j];
        }
        cout<<" ";
    }
}