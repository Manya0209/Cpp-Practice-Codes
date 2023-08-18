#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id=inpid;
        salary=34.0;
    }
    employee(){}
};

/*derived class syntax
class {{derived class name}}: {{visibility mode}} {{base class name}}
*/
/*note:
1.default visibility is private
2.public visibility mode: public members of base class becomes public members of derived class.
3.private visibility mode: public members of base class becomes private members of derived class.
4. private members are never inherited.
*/

class programmer : public employee
{
    public:
     int languagecode;
    programmer(inpid){
        id=inpid;
        languagecode=10;
    }
};

int main(){
    employee rahul(1), rohan(2);
    cout<<"rahul.salary"<<endl;
    cout<<"rohan.salary"<<endl;
    programmer skillf(100);
    cout<<skillf.languagecode<<endl;
    return 0;
}