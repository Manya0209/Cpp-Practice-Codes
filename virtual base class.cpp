#include<iostream>
 using namespace std;

 class student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int r);
    void get_roll_no(void);
 };
 void student::set_roll_no(int r){
    roll_no=r;
 }
 void student::get_roll_no(void){
    cout<<"the roll no. of student is "<<roll_no<<endl;
 }

 class test: virtual public student{
    protected:
    float maths;
    float science;
    public:
    void set_marks(float, float);
    void get_marks(void);
 };
 void test:: set_marks(float m1, float m2){
    maths=m1;
    science=m2;
 }
 void test :: get_marks(void){
    cout<<"the marks obtained in maths are "<<maths<<endl;
    cout<<"the marks obtained in science are "<<science<<endl;
 }

 class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
      score= sc;
    }
    void get_score(void){
      cout<<"your PT score is "<<score<<endl;
    }
 };  

 class result: public test, public sports{
    protected:
    float total;
    public:
    void display(){
        get_roll_no();
        get_marks();
        get_score();
        cout<<"your total is "<<maths + science + score<<endl;
    }
 };

 int main(){
    result rohan;
    rohan.set_roll_no(39);
    rohan.set_marks(77.0,78.0);
    rohan.set_score(17.0);
    rohan.display();
    return 0;
 }
 