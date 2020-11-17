#include <iostream>

using namespace std;
#if 0
int countWords(const string& str)
{
  int count=0;
  for(char c: str)
    if(c == ' ')
      count++;
  return ++count;
}
#endif

void reverseString(string& str, int first, int length)
{
  char tmp;
  for(int i=0; i<length/2; i++) {
    tmp = str.at(first+i);
    str.at(first+i) = str.at(first+length-1-i);
    str.at(first+length-1-i) = tmp;
  }
}

string reverseSentence(string& str)
{
  int pos = 0;
  int start = 0;
  while(pos != -1) {
    pos = str.find(' ', start);
    if(pos == -1) // last word
      reverseString(str, start, str.length() - start);
    else
      reverseString(str, start, pos - start);
    start = pos+1;
  }
  reverseString(str,0,str.length());
  return str;
}

#if 0
string getWord(const string& str, int num)
{
  if(num == 0 || num > countWords(str))
    return "";

  int pos = 0;
  int prev = 0;
  while(num-- > 0) {
    prev = pos;
    pos = str.find(' ', prev+1);
  } 
  return str.substr(prev+1, pos-prev-1);
}
#endif

int main()
{
  string str = "This is my string";

  //cout << countWords(str) << endl;
  //cout << getWord(str, 1) << endl;

  //str.insert(7, " not");
  //cout << str << endl;
  //cout << countWords(str) << endl;
  //for(int i=0; i < countWords(str) ; i++)
  //  cout << getWord(str, i) << endl;
  //cout << getWord(str, 4) << endl;
  cout << str << endl;
  cout << reverseSentence(str) << endl;
}
