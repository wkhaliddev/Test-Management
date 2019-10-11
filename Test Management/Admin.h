#include <iostream>
using namespace std;
# include "Person.h"

class Admin : public Person
{
private:
	string loginPassword;
	const string correctLoginPassword = "abcd";
	const string correctCNIC = "12345";
protected:
	void appendQuestion();
	void adminDeleteQuestion();
	bool checkLogin();
public:
	void setLoginPassword(string);
	string getLoginPassword();
	void Login();
};
#pragma once
