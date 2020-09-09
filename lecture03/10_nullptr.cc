#include <iostream>

using namespace std;

int main()
{
  int* p_int = nullptr;
  printf("%s\n", typeid(nullptr).name() );
  printf("%s\n", typeid(p_int).name() );

  return 0;
}
