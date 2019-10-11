
#include<iostream>
using namespace std;
#include<string>
#include<cstring>
# include <fstream>
# include "Question.h"
class  Person {
	string name;
	string CNIC;
protected:
	Question question;
public:
	void setName(string);
	void setCNIC(string);
	string getName();
	string getCNIC();
	void acessPaper();

};
#pragma once
