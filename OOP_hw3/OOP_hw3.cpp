#include <iostream>


#include "Employee.h"
    #include "Hourly.h"
    #include "Salaried.h"
#include "Roster.h"


using namespace std;

int main()
{
    Employee test, test2("M", "123");
    test.setName("Matt"); test.setSsn("8675309");
    test.print(); cout << endl;

    Hourly h_test("Jon", "8675321", 12.5, 40);
    h_test.print(); cout << endl;

    Salaried s_test("Steve", "123456", 50000);
    s_test.print(); cout << endl;

    cout << "\n\n***Roster Tests:***\n";
    Roster r;

    r.addEmployee(&test);
    r.addEmployee(&h_test);
    r.addEmployee(&s_test);

    r.print();



    
}


