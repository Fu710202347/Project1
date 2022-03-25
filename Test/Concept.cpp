#include"Concept.h";

Concept::Concept()
{
	ifstream conceplist("mappingconcept.txt");
	string line;
	while (getline(conceplist, line))
	{
		Conceptlist.push_back(line);
	}
}
vector<string>Concept::getConceptlist()
{
	return Conceptlist;
}
void Concept::displayConceptlist(vector<string>&Conceptlist,int & TotalMistakes)
{
	for (int i = 0; i < TotalMistakes; i++)
	{
		cout << Conceptlist[i] << endl;
	}
}