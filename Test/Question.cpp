#include"Question.h"
#include"Concept.h"
Question::Question()
{
	ifstream answerkeyfile("answerkey.txt");
	char input;
	while (answerkeyfile >> input)
	{
		Answerkey.push_back(input);

	}
}
vector<char>Question::getAnswerkey()
{
	return Answerkey;
}
void Question::CompareAnswer(vector<char>& StudentAnswer)
{
	vector<string>CorrespondingConcept;
	Concept Concept;
	float totalQuestionCorrect = 0;
	int totalQuestionIncorrect = 0;
	for (int i = 0; i < 10; i++)
	{

		if (StudentAnswer[i] == getAnswerkey()[i])
		{
			totalQuestionCorrect++;
		}
		else
		{
			totalQuestionIncorrect++;
			CorrespondingConcept.push_back(Concept.getConceptlist()[i]);
		}
	}
	cout << "\nAnswered Correctly: " << totalQuestionCorrect << "\n";
	cout << "Answered Incorrectly: " << totalQuestionIncorrect << "\n\n";
	cout << "Corresponding Concept for Incorrect Questions: " << endl;
	Concept.displayConceptlist(CorrespondingConcept, totalQuestionIncorrect);
	cout << "Overall Correct Ratio: " << 50 / totalQuestionCorrect << endl;
	cout << "----------------------------------------------------";
}
void Question::displayAnswerKey()
{
	for (int i = 0; i < 10; i++)
	{
		cout << Answerkey[i];
	}
}