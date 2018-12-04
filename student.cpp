#include "student.h"
#include <string>
using namespace std;
void student::setName(string first, string last)
{
        firstName = first;
        lastName = last;
}
string student::fullName()
{

        return firstName + lastName;
}
