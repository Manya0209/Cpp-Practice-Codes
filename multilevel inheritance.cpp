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

 class exam: public student{
    protected:
    float maths;
    float science;
    public:
    void set_marks(float, float);
    void get_marks(void);
 };
 void exam:: set_marks(float m1, float m2){
    maths=m1;
    science=m2;
 }
 void exam:: get_marks(void){
    cout<<"the marks obtained in maths are "<<maths<<endl;
    cout<<"the marks obtained in science are "<<science<<endl;
 }

 class result: public exam{
    protected:
    float percentage;
    public:
    void display(){
        get_roll_no();
        get_marks();
        cout<<"your percentage is "<<(maths+science)/2<<"%"<<endl;
    }
 };

 int main(){
    result rohan;
    rohan.set_roll_no(39);
    rohan.set_marks(97.0,98.0);
    rohan.display();
    return 0;
 }
 