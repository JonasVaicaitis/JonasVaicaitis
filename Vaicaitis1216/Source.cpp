#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//--------------------
const char CDfv[] = "Tekstas.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMAX = 300;
//---------------------
void skaitymas(string A[], int & n, char sim);
int Kiek(char sim);
void spausdinti();
//----------------------
int main()
{
	string A[CMAX];
	int n;
	char sim;
	skaitymas(A, n, sim);
	char sim;
	int simbolis = Kiek(sim);
	spausdinti();
	return 0;
}
//----------------------
void skaitymas(string A[], int & n, char sim)
{
	ifstream fd(CDfv);
	fd >> n;
	fd >> sim;
	fd.ignore(80, '\n');
	for (int i = 0; i < n; i++)
	{
		getline(fd, A[i]);
	}
	fd.close();
}
//----------------------
int Kiek(char sim)
{
	char s; 
	int n, k = 0;
	ifstream fd(CDfv);
	fd >> n;
	for (int i = 0; i < n; i++)
	{
		fd >> s;
		if (s == sim)
		{
			k++;
		}
	}
	fd.close();
	return k;
}
//---------------------------
void spausdinti(int simbolis)
{
	ofstream fr(CRfv, ios::app);
	fr << "Daugiausiai kartu pasikartojantis simbolis: " << simbolis << endl;
	//kiekio skaiciavimo masyve atsakymas
}
//----------------------