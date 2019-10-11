# include "Person.h"
void Person::setName(string n)
{
	name = n;
}
void Person::setCNIC(string cnic) {
	this->CNIC = cnic;
}
string Person::getName() {
	return name;
}
string Person::getCNIC()
{
	return CNIC;
}
