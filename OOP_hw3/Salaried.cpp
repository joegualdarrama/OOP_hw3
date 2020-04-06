#include "Salaried.h"

Salaried::Salaried(string n, string s, float sal) : salary(sal)
{
	setName(n);
	setSsn(s);
}

void Salaried::setSal(float s)
{
	salary = s;
}

float Salaried::getSale() const
{
	return salary;
}

void Salaried::print() const
{
	cout << "Salaried Employee Date:" << endl;
	cout << "Employee Name:\t" << getName() << endl;
	cout << "Employee SSN: \t" << getSsn() << endl;
	cout << "Salary:       \t" << salary << endl;
	cout << fixed << setprecision(2);
	cout << "Weekly Salary:\t" << salary / 52 << endl;
}
