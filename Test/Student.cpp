#include"Student.h"
#include"Question.h"


void Student::StudentAnswerKeyInput(vector<char>& StudentAnswerKey, ifstream& StudentAnswerKeyFile)
{
	char input;
	while (StudentAnswerKeyFile >> input)
	{
		StudentAnswerKey.push_back(input);
	}
}
vector<char>Student::getStudentAnswerKey()
{
	return StudentAnswerKey;
}
void Student::ResultOfAllStudents()
{
	Question Question;
	cout << "\nStudent one: ";
	Question.CompareAnswer(StudentAnswerKey);
	cout << "\nStudent Two: ";
	Question.CompareAnswer(StudentAnswerKey2);
	cout << "\nStudent Three: ";
	Question.CompareAnswer(StudentAnswerKey3);
	cout << "\nStudent Four: ";
	Question.CompareAnswer(StudentAnswerKey4);
	cout << "\nStudent Five: ";
	Question.CompareAnswer(StudentAnswerKey5);
}
void Student::InputForAllStudents()
{
	ifstream StudentAnswerKeyFile("StudentAnswer.txt");
	ifstream StudentAnswerKeyFile2("StudentAnswer2.txt");
	ifstream StudentAnswerKeyFile3("StudentAnswer3.txt");
	ifstream StudentAnswerKeyFile4("StudentAnswer4.txt");
	ifstream StudentAnswerKeyFile5("StudentAnswer5.txt");

	StudentAnswerKeyInput(StudentAnswerKey, StudentAnswerKeyFile);
	StudentAnswerKeyInput(StudentAnswerKey2, StudentAnswerKeyFile2);
	StudentAnswerKeyInput(StudentAnswerKey3, StudentAnswerKeyFile3);
	StudentAnswerKeyInput(StudentAnswerKey4, StudentAnswerKeyFile4);
	StudentAnswerKeyInput(StudentAnswerKey5, StudentAnswerKeyFile5);
}
