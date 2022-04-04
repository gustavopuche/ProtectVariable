#include <iostream>

using namespace std;

class A
{
public:
  void init(){
    varA = 1234;
  }
protected:
  int varA = 0;
};

class B : public A
{
public:
  void start(){
    init();
    cout << "Value of varA: " << varA << endl;
    varA = 324;
    cout << "Other value of varA: " << varA << endl;
  }
};

int main()
{
  B b;

  b.start();
    
  return 0;
}
