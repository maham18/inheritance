#include<iostream>
using namespace std;
class pc
{
  public:
  pc()
  {
    cout << "pc :: pc()" << endl;
  }
  bool turn_on()
  {
    cout << "turn on :: turn_on()" << endl;
  }
 bool   turn_off()
  {
    cout << "turn off :: turn_off()" << endl;
  }
  ~pc()
  {
    cout << "pc :: ~pc()" << endl;
  } 
};