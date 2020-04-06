#pragma once
#include <vector>
#include "Employee.h"
#include <algorithm>


class Roster
{
private:
	vector<Employee*> list;

public:
	void addEmployee(Employee  e);
	void removeEmployee(string ssn);
	void print() const;
};

