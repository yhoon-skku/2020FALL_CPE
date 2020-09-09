#include <iostream>

using namespace std;

int main()
{
  // const_cast
  cout << endl << "const_cast example" << endl;
  // Check what happens with the below line!!
  //double var2 = const_cast<double>(var1);
  double var1 = 1.1;
  // Beware! It is undefined behavior to modify a value which is initially declared as const. 
  //const double var1 = 1.1;
  const double& var2 = var1;
  // Check what happens with the below line!!
  //var2 = 1.2;
  double& var3 = const_cast<double&>(var2);
  cout << var1 << '\t' << var2 << '\t' << var3 << endl;
  var3 = 1.3;
  cout << var1 << '\t' << var2 << '\t' << var3 << endl;
  //cout << &var1 << '\t' << &var2 << '\t' << &var3 << endl;

  return 0;
}
