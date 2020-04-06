#pragma once
#include "Employee.h"
class Salaried :
	public Employee
{
public:
	float salary;

	Salaried(string n, string s, float sal) : Employee(n, s), salary(sal) {};
	void setSal(float sal);
	float getSale() const;

	virtual void print() const override {
		cout << "Salaried Employee Data:" << endl;
		cout << "Employee Name:\t" << name << endl;
		cout << "Employee SSN: \t" << ssn << endl;
		cout << "Salary:       \t" << salary << endl;
		cout << fixed << setprecision(2);
		cout << "Weekly Salary:\t" << salary / 52 << endl << endl;
	}
};

