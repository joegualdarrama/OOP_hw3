#include "Roster.h"

void Roster::addEmployee(Employee e)
{
	list.push_back(&e);
}

void Roster::removeEmployee(string ssn)
{
	bool found = false;

	for (auto it = list.begin(); it != list.end(); it++) {

		if ((*it)->getName() == ssn) {
			found = true;
			list.erase(it);
			cout << "SSN: " << ssn << " removed." << endl;
			break;
		}
	}
	if (!found)
		cerr << "SSN not found." << endl;
}

void Roster::print() const
{
	for (int i = 0; i < list.size(); i++) {
		list.at(i)->print();
	}
}
