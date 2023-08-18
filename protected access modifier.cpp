#include<iostream>
using namespace std;

class base{
   protected:
   int a;
   private:
   int b;
};

/*
for protected member:
                      private mode   public mode   protected mode
   private mem       not inherited  not inherited  not inherited
   protected mem     private         protected      protected
   public mem        private         public         protected
*/
class derived : protected base{

};

int main(){
   base b;
   derived d;
  // cout<<d.a; // will not work as a is protected both in base as well as derived class.
   return 0;
}