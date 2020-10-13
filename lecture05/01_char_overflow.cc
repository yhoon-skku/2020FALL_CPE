#include <iostream>

using namespace std;

int main()
{
  // Following code has errors
  char name1[6] = {'T', 'z', 'u', 'y', 'u', '\0'};
  char name2[5] = {'S', 'a', 'n', 'a', '\0'};
  char name3[7] = {'D', 'a', 'h', 'y', 'u', 'n', '\0'};

  cout << name1 << endl;
  cout << name2 << endl;
  cout << name3 << endl;
}

