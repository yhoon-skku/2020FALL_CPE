#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str("abcde");
  cout << str.length() << endl;
  
  str.erase(0,1);
  cout << str << endl; // bcde
  cout << str.length() << endl;
  cout << str.substr(1, 2) << endl;
}
