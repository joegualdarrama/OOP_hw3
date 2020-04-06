#pragma once
#include "Employee.h"
class Salaried :
	public Employee
{
public:
	float salary;

	Salaried(string n = "", string s = "", float sal = 0.0);
	void setSal(float s);
	float getSale() const;

	void print() const;
};

