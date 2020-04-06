#include "Employee.h"
using namespace std;


Employee::Employee(string n, string ssn) : name(n), ssn(ssn)
{
}

Employee::~Employee()
{
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setSsn(string s)
{
	ssn = s;
}

string Employee::getName() const
{
	return name;
}

string Employee::getSsn() const
{
	return ssn;
}

void Employee::print() const
{
	cout << "Employee Data:" << endl;
	cout << "Employee Name:\t" << name << endl;
	cout << "Employee SSN: \t" << ssn << endl;
}
