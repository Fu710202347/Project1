#ifndef Student_h
#define Student_h
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
class Student
{
private:
	vector<char>StudentAnswerKey, StudentAnswerKey2, StudentAnswerKey3, StudentAnswerKey4, StudentAnswerKey5;
public:
	void StudentAnswerKeyInput(vector<char>& StudentAnswerKey, ifstream& StudentAnswerKeyFile);
	vector<char>getStudentAnswerKey();
	void ResultOfAllStudents();
	void InputForAllStudents();

};
#endif
#pragma