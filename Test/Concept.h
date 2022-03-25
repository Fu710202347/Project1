#ifndef Concept_h
#define Concept_h
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

class Concept
{
private:
	vector<string>Conceptlist;
public:
	Concept();
	vector<string>getConceptlist();
	void displayConceptlist(vector<string>&Conceptlist, int& TotalMistakes);
};
#endif // !Concept_h
#pragma

