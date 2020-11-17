#include <iostream>

using namespace std;

class Person 
{
  public:
    Person();
    Person(string name); 
    ~Person();
    string getName() const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
};

Person::Person()
{
  cout << "in Person()" << endl;
}

Person::Person(string name)
  : name(name)
{
  cout << "in Person(string name)" << endl;
}

Person::~Person()
{
  cout << "in ~Person()" << endl;
}

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
}

int main()
{
  Person personA;
  personA.printInfo();
  //Person personB("Mike");
  //Person persons[10];
  //Person* person = new Person[10];
  //Person& personB = personA;
  return 0;
}
