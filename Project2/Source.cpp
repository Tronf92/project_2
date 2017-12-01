#include <iostream>
#include <stdio.h>
#include <fstream>
#include <time.h>
using namespace std;

int meniu;

class piese{
public:
	int ID;
	double pret;
	char vanzator[100];
	char piesa[100];
	
};
piese piece;

class menu{
public:
	
	void initializare(){
		do{
			cout << "1. Piesa noua. " << endl;
			cout << "0.Iesire. " << endl;
		}while(meniu!=0);
};
	void change(int meniu)
	{
		cin >> meniu;
		switch (meniu)
		{
		case 0:
			break;
		case 1:
			cout << "Introdu codul piesei" << endl;
			cin >> piece.ID ;
			cout << piece.ID;
			break;
		default:
			cout << "Optiune gresita" << endl;
			break;
		}	
	
	}
};

int main()
{
	/*
	/*cout << "Introdu codul piesei" << endl;
	cin >> piece.ID;
	cout << "Introdu pretul piesei " << endl;
	cin >> piece.pret;
	cout << "Introdu vanzatorul" << endl;
	fflush(stdin);
	gets(piece.vanzator);
	cout << "Introdu modelul piesei" << endl;
	fflush(stdin);
	gets(piece.piesa);
	
	
	cout << "ID piesa: " << piece.ID << endl;
	cout << "Pret: " << piece.pret << endl;
	cout << "Vanzator: " << piece.vanzator << endl;
	cout << "Model: " << piece.piesa << endl;
	

	ofstream ofile;
	ofile.open("piece.txt",ios::app);
	ofile << "ID piesa: " << piece.ID << endl;
	ofile << "Pret: " << piece.pret << endl;
	ofile << "Vanzator: " << piece.vanzator << endl;
	ofile << "Model: " << piece.piesa << endl;
	ofile << endl;
	ofile << asctime(lctime);
	ofile.close();*/
	menu mn;
	
	mn.initializare();
	mn.change(meniu);

	system("pause");
	return 0;
}


