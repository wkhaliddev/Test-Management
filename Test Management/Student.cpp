/*
# include "Student.h"

int Student:: totalMarks = 0;

void Student:: setRollNo(string r)
{
rollNo = r;
}
string Student::getRollNo()
{
return rollNo;
}
void Student::login()
{
string  studentRollNo;
cout << "Please! Enter Your Roll No " << endl;
cin >> studentRollNo;
setRollNo(studentRollNo);
ifstream read;
read.open("record.txt");
string line;
while (!read.eof())
{
getline(read, line);
if (line == getRollNo())
{
cout << "Sorry ! this RollNO s Already used " << endl;  /// max possibility to match is one
cout << " Marks are :\n" << endl;
}
}
if (line != getRollNo())
{
ofstream write;
write.open("record.txt", ios::app);
write << getRollNo();
write.close();
int condition;
cout << "Welcom :" << endl;
cout << "Please! select any of these :" << endl;
cout << "1 : start Exam " << endl;
//cout << "2 : See Marks" << endl;
cout << "3 : main menu " << endl;
cin >> condition;
if (condition == 1)
{
int y = 5;
nextQuestion(&y);
/*ifstream read;
read.open("paper.txt");
int x = 1;
while (!read.eof())
{
while (x <= y)
{
getline(read, line);
cout << line << endl;
x++;
}
string answer_skip;
cout << "type Answer Here  :" << endl;
cout << "if you want to skip Question Perss S" << endl;
cin >> answer_skip;
/*	if (answer_skip == "s" || answer_skip == "S")
{
skipQuestion(answer_skip, &y);
//nextQuestion(&y);
}
}
else if (answer_skip == "a" || answer_skip == "b" || answer_skip == "c" || answer_skip == "d")
{
checkAnswer(answer_skip, &y);
nextQuestion(&y);
}
else
{
cout << "Please enter write input " << endl;
}
while (x <= y)
{
getline(read, line);
cout << line << endl;
x++;
}
}
}
}

}
}

void Student:: skipQuestion(string answer_skip, int *y)
{
ifstream read;
read.open("paper.txt");
string line;
int x = 0;
//if (answer_skip == "s" || answer_skip == "S")
//{
ofstream writeskip;
writeskip.open("skipfile.txt", ios::app);
x = *y - 5;
while (x <= *y)
{
getline(read, line);
writeskip << line << endl;
x++;
}
*y += 5;
//}
}
void Student::checkAnswer(string answer_skip, int *y)
{
int x = *y / 5;
int i = 0;

ifstream readAns;
readAns.open("answersFile.txt");
string line;
while (!readAns.eof())
{
getline(readAns, line);
i++;
if (i == x)
{
if (answer_skip == line)
{
totalMarks += 4;
}
else
{
totalsMarks--;
}


}
}
readAns.close();
//*y +=5;

}


void Student::nextQuestion(int *y)
{
ifstream read;
read.open("paper.txt");
string line;
int i = *y/5;
int x = *y - 4;
whiel(!read.eof()) {
cout << "Qeustion No :" << i << endl;
while (x <= *y)
{

getline(read, line);
cout << line << endl;
x++;
}
string answer_skip;
cout << "type Answer Here  :" << endl;
cout << "if you want to skip Question Perss S" << endl;
cin >> answer_skip;
if (answer_skip == "s" || answer_skip == "S")
{
int lineNo = *y;
skipQuestion(answer_skip, &lineNo);
nextQuestion(&lineNo);
}
}
else if (answer_skip == "a" || answer_skip == "b" || answer_skip == "c" || answer_skip == "d")
{
checkAnswer(answer_skip, &y);
nextQuestion(&y);
}
else
{
cout << "Please enter write input " << endl;
}
}
}*/
