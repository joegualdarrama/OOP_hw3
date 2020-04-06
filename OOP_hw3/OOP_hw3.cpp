#include <iostream>

#include "Employee.h"
#include "Roster.h"


using namespace std;

int main()
{

    Hourly h_test("Jon", "8675321", 12.5, 40);
    Hourly h_test2("Aren", "4687", 20.0, 20);
    Salaried s_test("Steve", "123456", 50000);
    Salaried s_test2("Matt", "43201", 22000);

    cout << "\n\n***Roster Tests:***\n";
    Roster r;

    r.addEmployee(&h_test);
    r.addEmployee(&h_test2);
    r.addEmployee(&s_test);
    r.addEmployee(&s_test2);
    r.addEmployee(&s_test2);
    r.printRoster();

    cout << "\n\n***Remove Tests:***\n";
    r.removeEmployee(&h_test);
    r.removeEmployee(&s_test2);
    r.printRoster();
    
}


