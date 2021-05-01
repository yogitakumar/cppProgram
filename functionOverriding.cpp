#include <iostream>
using namespace std;
class BaseClass {
public:
   void display(){
      cout<<"Function of Parent Class";
   }
};
class DerivedClass: public BaseClass{
public:
   void display() {
      cout<<"Function of Child Class";
   }
};
int main() {
   DerivedClass obj = DerivedClass();
   obj.display();
   return 0;
}