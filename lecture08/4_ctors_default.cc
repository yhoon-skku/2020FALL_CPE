#include <iostream>

using namespace std;

class DayOfYear 
{
  public:
    DayOfYear(int, int);

    void output(); 
  private:
    int month;
    int day;
};

DayOfYear::DayOfYear(int monthValue = 1, int dayValue = 1)
  : month(monthValue), day(dayValue)
{
  cout << "2 In the constructor DayOfYear" << endl;
}

void DayOfYear::output()
{
  cout << month << "/" << day << endl;
}

int main()
{
  // Declaring an object without arguments causes an error
  // when we have constructors but the default one.
  DayOfYear christmas;
  christmas = DayOfYear(12, 25);
  christmas.output();
}

