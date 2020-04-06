#include "Hourly.h"

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