#include<iostream>
using namespace std;
#include<string>
# include <vector>
#include<cstring>
# include <fstream>
class Question {
	string statement;
	string optionA;
	string optionB;
	string optionC;
	string optionD;
	string correctOption;
public:
	Question();
	void setStatement(string);
	void setOptionA(string);
	void setOptionB(string);
	void setOptionC(string);
	void setOptionD(string);
	void setCorrectOption(string);

	string getStatement();
	string getOptionA();
	string getOptionB();
	string getOptionC();
	string getOptionD();
	string getCorrectOption();


	void addQuestion();
	void deleteQuestion();


};
