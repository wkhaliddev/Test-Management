#include "Admin.h"
void  Admin::Login()
{

	/*if (!checkLogin())
	{
	cout << " sorry! Credentials are Wrong  " << endl;

	}*/
	//else
	//{
	int condition = 0;

	cout << " Please! select any of these :" << endl;
	cout << "1 : see Paper " << endl;
	cout << "2 : Add a Question " << endl;
	cout << "3 : Delete a Question " << endl;
	cout << "4 : main menu " << endl;
	cin >> condition;
	if (condition == 1)
	{
		ifstream readPaper;
		readPaper.open("paper.txt");
		int i = 5, quesNO = 1;
		while (!readPaper.eof())
		{
			string line;
			getline(readPaper, line);

			cout << endl;
			i++;

			if (line == "") {

			}
			else if (i % 6 == 0 || i == 6)                          // for question number
			{

				cout << "QuestinNo : " << quesNO << endl;
				quesNO++;
			}
			else if ((i + 1) % 6 == 0 && i != 6) {

				cout << "Correct option : ";
			}

			cout << line;

		}
		readPaper.close();
	}
	else if (condition == 2)
	{

		appendQuestion();
	}
	else if (condition == 3)
	{
		adminDeleteQuestion();
	}
	else if (condition == 4)
	{
		//void main();
	}
	else
	{
		cout << "please choose right option ! " << endl;
	}
}
//}
void Admin::setLoginPassword(string lp)
{
	loginPassword = lp;
}
string Admin::getLoginPassword()
{
	return loginPassword;
}
void  Admin::appendQuestion()
{

	question.addQuestion();
}
void  Admin::adminDeleteQuestion()
{
	question.deleteQuestion();
}
bool Admin::checkLogin()
{
	string var;
	cout << " please Enter your Credential " << endl;
	cout << " Enter CNIC";
	cin >> var;
	setCNIC(var);
	if (getCNIC() == correctCNIC)
	{
		cout << " Enter Login Password ";
		cin >> var;
		setLoginPassword(var);
		if (getLoginPassword() == correctLoginPassword)
		{
			return true;
		}
	}
	return false;
}
