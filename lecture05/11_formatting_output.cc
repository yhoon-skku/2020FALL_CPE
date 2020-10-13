#include <iostream>

using namespace std;

int main()
{
#if 1
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(5);
#endif

  double price = 78.5909809283;
  cout << "The price is $" << price << endl;

  return 0;
}
