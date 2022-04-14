#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int number;

public:
    Student(string name, int number)
    {
        this->name = name;
        this->number = number;
    }
    void getInfo()
    {
        cout << name << "," << number << endl;
    }
};

int main()
{

    Student oktay("Oktay", 21412);
    oktay.getInfo();

    return 0;
}
