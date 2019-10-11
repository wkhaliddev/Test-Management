#include "Question.h"


Question::Question() {
	statement = "";
	optionA = "";
	optionB = "";
	optionC = "";
	optionD = "";
	correctOption;
}
void Question::setStatement(string s) {
	statement = s;
}
void Question::setOptionA(string s) {
	optionA = s;
}
void Question::setOptionB(string s) {
	optionB = s;
}
void Question::setOptionC(string s) {
	optionC = s;
}
void Question::setOptionD(string s) {
	optionD = s;
}
void Question::setCorrectOption(string s) {
	correctOption = s;
}
string Question::getStatement() {
	return statement;
}
string Question::getOptionA() {
	return optionA;
}
string Question::getOptionB() {
	return optionB;
}
string Question::getOptionC() {
	return optionC;
}
string Question::getOptionD() {
	return optionD;
}
string Question::getCorrectOption()
{
	return correctOption;
}
void Question::addQuestion() {
	ofstream write;
	write.open("paper.txt", ios::app);

	if (write.is_open())
	{
		string s;

		cout << "Enter Statement :\n" << endl;
		cin.ignore();
		getline(cin, s);
		cin.ignore();
		write << s << endl;
		setStatement(s);

		cout << "Enter Option A :\n" << endl;
		s = "";
		getline(cin, s);
		write << s << endl;
		setOptionA(s);

		cout << "Enter Option B :\n" << endl;
		s = "";
		getline(cin, s);
		write << s << endl;
		setOptionB(s);

		cout << "Enter Option C :\n" << endl;
		s = "";
		getline(cin, s);
		write << s << endl;
		setOptionC(s);

		cout << "Enter Option D :\n" << endl;
		s = "";
		getline(cin, s);
		setOptionD(s);
		write << s << endl;

		cout << "Enter correct Option  :\n" << endl;
		s = "";
		getline(cin, s);
		setCorrectOption(s);
		write << s << endl;

	}
	else
	{
		cout << "file not open " << endl;
	}

	write.close();

}
void Question::deleteQuestion()
{
	int quesNo;
	cout << " enter the Question number you want to delete " << endl;
	cin >> quesNo;
	quesNo--;
	{
		int i = 1;
		vector<string> Delete;
		string line;
		fstream read;
		read.open("paper.txt");
		if (read.is_open())
		{
			while (!read.eof())
			{
				if ((i<quesNo * 5) || (i>quesNo * 5 + 5))
					getline(read, line);
				i++;
				Delete.push_back(line);
			}
			read.close();
			read.open("paper.txt", ios::trunc);
			read.close();
			read.open("paper.txt", ios::app);
			int length = Delete.size();
			for (int i = 1; i < length; ++i)
				read << Delete[i] << endl;
		}
		read.close();
	}
}
