#include <iostream>
#include <stdio.h>

using namespace std;

unsigned int get_bit(unsigned int num, int pos)
{
  if(pos > 32)
    return -1;
  return (num >> pos) & 1;
}

void print_bits(unsigned int num)
{
  cout << num << " is ";
  for(int i=0; i<32; i++) {
    if(i % 4 == 0)
      cout << " ";
    cout << get_bit(num, 31-i);
  }
  cout << ".\n";
}


int main()
{
  // reinterpret_cast
  cout << endl << "reinterpret_cast example" << endl;
  unsigned int var4 = 1;
  float fvar = reinterpret_cast<float&>(var4);
  cout << var4 << endl;
  print_bits(var4);
  cout << fvar << endl;
  print_bits(*((int*)(&fvar)));

  return 0;
}
