#ifndef Question_h
#define Question_h
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

class Question 
{
private:
	vector<char>Answerkey;
public:
	Question();
	vector<char>getAnswerkey();
	void CompareAnswer(vector<char>& StudentAnswer);
	void displayAnswerKey();
};
#endif
#pragma