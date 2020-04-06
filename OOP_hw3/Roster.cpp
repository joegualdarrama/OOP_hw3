#include "Roster.h"

void Roster::addEmployee(Employee *e)
{
	set.insert(e);
}

void Roster::removeEmployee(string ssn)
{

}

void Roster::print() const
{
	//std::for_each(set.begin(), set.end(), std::mem_fn(&Employee::print));

	for (auto it = set.begin(); it != set.end(); ++it) {
		(*it)->print();
	}

}
