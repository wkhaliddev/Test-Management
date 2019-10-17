// libararies need for file to work properly
#include <iostream>
using namespace std;
// person header file to access its functions
# include "Person.h"
// Admin Class
class Admin : public Person
{
private:
 // login and password
	string loginPassword;
	const string correctLoginPassword = "abcd";
	const string correctCNIC = "12345";
protected:
 // question Authority function
	void appendQuestion();
	void adminDeleteQuestion();
	bool checkLogin();
public:
 // login setter and getters
	void setLoginPassword(string);
	string getLoginPassword();
	void Login();
};
#pragma once
