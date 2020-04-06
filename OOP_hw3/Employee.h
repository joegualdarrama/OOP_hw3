#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
protected:
	string name;
	string ssn;

public:
	Employee(string n = " ", string s = " ") : name(n), ssn(s) {};
	~Employee() {};

	virtual void print() const = 0;

};

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

void Salaried::setSal(float s)
{
	salary = s;
}

float Salaried::getSale() const
{
	return salary;
}

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
