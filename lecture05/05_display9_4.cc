// demonstrates the standard class string.
#include <iostream>
#include <string> // It may work without including, BUT it is not guaranteed.
using namespace std;

int main( )
{
  string phrase; // initialized to the empty string

  // two equivalent ways of initializing a string variable
  string adjective("fried"), noun("ants");
  string newWord(adjective + " " +  noun);

  string wish = "Bon appetite!";

  phrase = "I love " + newWord + "!";
  cout << phrase << endl << wish << endl;
  phrase = "I love " + adjective + " " + noun + "!";
  cout << phrase << endl << wish << endl;
  return 0;
}
