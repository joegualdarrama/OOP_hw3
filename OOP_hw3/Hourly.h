#pragma once
#include "Employee.h"

class Hourly :
	public Employee
{
private:
	float wage;
	float hours;
public:

	Hourly(string n, string s, float w, float h) : Employee(n, s), wage(w), hours(h) {};
	void setWage(float w);
	void setHours(float h);

	float getWage() const;
	float getHours() const;
	float getPay() const;

	 virtual void print() const override {
		cout << "Hourly Employee Data:" << endl;
		cout << "Employee Name:\t" << name << endl;
		cout << "Employee SSN: \t" << ssn << endl;
		cout << "Employee Wage:\t" << wage << endl;
		cout << "Employee Hour:\t" << hours << endl;
		cout << fixed << setprecision(2);
		cout << "Gross Pay:    \t" << getPay() << endl << endl;
	}
	
};

