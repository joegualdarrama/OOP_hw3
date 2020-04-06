#pragma once
#include <vector>
#include <algorithm>
#include <set>
#include <functional> 

#include "Employee.h"


class Roster
{
private:
	set<Employee*> set;

public:
	void addEmployee(Employee  *e);
	void removeEmployee(Employee *e);
	void printRoster() const;
};

