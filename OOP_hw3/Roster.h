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

void Roster::addEmployee(Employee* e)
{
	set.insert(e);
}

void Roster::removeEmployee(Employee* e)
{
	auto it = set.find(e);

	if (it != set.end())
		set.erase(it);
}

void Roster::printRoster() const
{
	//std::for_each(set.begin(), set.end(), std::mem_fn(&Employee::print));

	for (auto it = set.begin(); it != set.end(); ++it) {
		(*it)->print();
	}

}
