#pragma once
#include "Employee.h"
class Hourly :
	public Employee
{
public:
	float wage;
	float hours;

	Hourly(string n = "", string ssn = "", float w = 0, float h = 0);

	void setWage(float w);
	void setHours(float h);

	float getWage() const;
	float getHours() const;
	float getPay() const;
	void print() const;
	
};

