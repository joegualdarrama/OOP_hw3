#include "Hourly.h"

Hourly::Hourly(string n, string s, float w, float h) : wage(w), hours(h)
{
	setName(n);
	setSsn(s);
}

void Hourly::setWage(float w)
{
	wage = w;
}

void Hourly::setHours(float h)
{
	hours = h;
}

float Hourly::getWage() const
{
	return wage;
}

float Hourly::getHours() const
{
	return hours;
}

float Hourly::getPay() const
{
	if (hours > 40) {
		int otHours = hours - 40;

		return (wage * 40) + (otHours * (wage * 1.5));
	}
	else {
		return hours * wage;
	}

}

void Hourly::print() const
{
	cout << "Hourly Employee Data:" << endl;
	cout << "Employee Name:\t" << getName() << endl;
	cout << "Employee SSN: \t" << getSsn() << endl;
	cout << "Employee Wage:\t" << wage << endl;
	cout << "Employee Hour:\t" << hours << endl;
	cout << fixed << setprecision(2);
	cout << "Gross Pay:    \t" << getPay() << endl;
}
