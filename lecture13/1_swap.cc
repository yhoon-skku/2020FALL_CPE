#include <iostream>

using namespace std;

template<typename T>
void swapValues(T& var1, T& var2 )
{
  cout << "swapValues template" << endl;
  T temp = var1;
  var1 = var2;
  var2 = temp;
}

int main()
{
  int i_A = 1, i_B = 2;
  swapValues(i_A, i_B);
  cout << i_A << ", " << i_B << endl;

  char c_A = 'a', c_B = 'b';
  swapValues(c_A, c_B);
  cout << c_A << ", " << c_B << endl;

  return 0;
}
