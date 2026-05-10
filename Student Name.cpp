#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentname;

public:
    Student();

    void display();
};

Student::Student()
{
    studentname = "Unknown";
}

void Student::display()
{
    cout << "Student Name: " << studentname << endl;
}

int main()
{
    Student studentobj;

    studentobj.display();
    return 0;
}