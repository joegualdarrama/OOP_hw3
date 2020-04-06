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

