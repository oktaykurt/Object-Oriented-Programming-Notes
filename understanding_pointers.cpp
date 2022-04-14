#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* foodPointer = &food;

  cout << food << "\n";
  cout << foodPointer << "\n";



  return 0;
}

