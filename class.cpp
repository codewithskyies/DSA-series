// #include <iostream>
// using namespace std;

// class Employee
// {
// public:
//     string name;
//     salary;

// }


//    int main()
// {

//     Employee har;
//     har.name = "harry";
//     har.salary = 100;

//     cout << "The name of our first Employee is " << har.name << "and his salary is " << har.salary << endl;

//     return 0;
// }






#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    void printdetails()
    {
        cout << "The name of our first Employee is "
             << name
             << " and his salary is "
             << salary << endl;
    }
};  // class ends here

int main()
{
    Employee har;
    har.name = "harry";
    har.salary = 100;

    har.printdetails();

    return 0;
}











