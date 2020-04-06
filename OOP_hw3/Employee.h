#pragma once
#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

class Employee
{
private:
	string name;
	string ssn;

public:
	Employee(string n = " ", string ssn = " ");
	~Employee();

	void setName(string n);
	void setSsn(string s);

	string getName() const;
	string getSsn() const;

	// pure virtual function:
	virtual void print() const;

};

