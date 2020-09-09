#include <iostream>

using namespace std;

int main()
{
  int intVar1 = 1, intVar2 = 2;
  cout << 1 / 2 << endl;
  cout << intVar1 / intVar2 << endl;
  cout << 1.0 / 2 << endl;
  cout << 1 / 2.0 << endl;

  // following line doesn't work
  //cout << intVar1.0 / intVar1 << endl;
  //               ~~
  return 0;
}
