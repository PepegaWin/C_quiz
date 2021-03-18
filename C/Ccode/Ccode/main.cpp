#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <string.h>
#include <conio.h>
using namespace std;

void Stoperica(int sekunda);
void MiniTajmer(int sek);
void Puni_Datoteku(struct lista_studenata* lista, int i);
void Pitanja(char broj_pitanja);




void Stoperica(int sekunda) {
	while (sekunda != 0) {
		sekunda--;
		Sleep(1000);
		/* Ovo je windows.h funkcija koja govori da program pauzira na mlisekundama u ovom pogledu to je 1 sec*/

	}
	cout << "Da imao si 5 sekundi da odgovoris na pitanje :3." << endl;
	Sleep(3000);
	cout << "Pokusaj je bio dobar." << endl;
}

void Dekoracije() {
	system("color 5E");

}
void MiniTajmer(int sek) {
	while (sek != 0) {

		cout << sek << endl;
		Sleep(1000);
		system("cls");
		sek--;
	}

}

/* Ovo je mala funkcija koja pomocu system("color") , po defaultu console-a daje background i foreground boje koje ce od navedenih biti( */

struct lista_studenata {
	char ime[50];
	char prezime[50];
	char index[50];
};
/* Trenutna struktura pitanja koja ce doci pri ovom testu*/
class Kvadrat {
public:
	Kvadrat() {

		cout << "                 ####" << endl;
		cout << "                 ####" << endl;
		cout << "                 ####" << endl;
	}
};

class Trougao {
public:
	Trougao() {

		cout << "          #   " << endl;
		cout << "         ###  " << endl;
		cout << "        #####" << endl;

	}
};

class Pravugaonik {
public:
	Pravugaonik() {
		cout << "########" << endl;
		cout << "########" << endl;
	}
};
/*Ovo su klasicni objekti uradjeni preko class-a kao cisti konstrukori */
void Pitanja(char broj_pitanja) {
	switch (broj_pitanja)
	{
	case '1':
		cout << "1.Pitanje: Koji mesec ima 28 dana ? " << endl;
		cout << "1.1 Februar?" << endl;
		cout << "1.2 Mart?" << endl;
		cout << "1.3 April?" << endl;
		cout << "Napisati odg velikim pocetnim slovom !" << endl;
		break;
	case '2':
		cout << "2.Pitanje: Kojih od ponudjenih predmeta nema ivice? " << endl;
		cout << "1. Pravugaonik / 2.Trougao / 3.Kvadrat " << endl;
		break;
	case '3':
		cout << " 3.Pitanje: 2+2*(3+)=?" << endl;
		cout << "Napisati odgovor u broju!" << endl;
		break;
	case '4':
		cout << "4.Pitanje:Sta je teze 500 kilo perija ili pola tone gvozdja?" << endl;
		cout << "1.Perije / 2.Gvozdje" << endl;
		cout << "3.Ili su mozda iste tezine?" << endl;
		cout << "Napisati broj tacnog odg!" << endl;
		break;
	case '5':
		cout << "5.Pitanje: U jednoj sobi ima trenutno petoro ljudi" << endl;
		Sleep(3000);
		system("cls");
		cout << "Iz te sobe dvoje odu u kuhinju" << endl;
		Sleep(3000);
		system("cls");
		cout << "Iz te kuhinje jedan ode u dvoriste" << endl;
		Sleep(3000);
		system("cls");
		cout << "A iz sobe jedan je otisao svojoj kuci" << endl;
		Sleep(3000);
		system("cls");
		cout << "Koliko je ljudi ostalo u kuci?" << endl;
		break;
	}

}

int main()
{
	int i = 0;
	while (i < 2) {
		Dekoracije();
		struct lista_studenata* lista;
		lista = new lista_studenata;
		if (lista == NULL)
		{
			cout << "Neuspesna dodela memorije";
			exit(1);
		}
		cout << "Welcome to my IqTestTester" << endl;
		cout << "So 1st of all type your name: " << endl;
		char name[11];
		cin.getline(name, 10);
		if (strcmp(name, "your name") != 0)
		{
			cout << "Greska nisi napisao [your name]." << endl;
			if (i == 1) {
				cout << "Proba vam nece trebati sada." << endl;
			}
			Sleep(1000);
		}
		else if (strcmp(name, "your name") == 0 && i == 1)
		{
			cout << "Drugi put nije lose." << endl;
		}
		else
			cout << "Svaka cast!" << endl;
		cout << "Ovo je bila mala proba, nadam se da ste shvatili kakav ce test biti u pitanju" << endl;
		cout << "Imacete dva pokusaja da ovo uradite, naravno srednja ocena ce biti vas rezultat ovog testa." << endl;

		cout << "Pre nego sto krenemo sa ovim pitanjima napisite vase ime: " << endl;
		cin >> lista[i].ime;
		cout << "Vase prezime: " << endl;
		cin >> lista[i].prezime;
		cout << "I naravno vas index: " << endl;
		cin >> lista[i].index;

		ofstream Highscore_lista;
		if (i == 0) {
			Highscore_lista.open("Lista.txt", ios::out);
			if (!Highscore_lista)
			{
				cout << "Greska pri otvaranju datoteke";
				exit(1);
			}
			Highscore_lista << "1.pokusaj" << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista << lista[i].ime << endl;
			Highscore_lista << lista[i].prezime << endl;
			Highscore_lista << lista[i].index << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista.close();



		}
		else {
			Highscore_lista.open("Lista.txt", ios::app);
			if (!Highscore_lista)
			{
				cout << "Greska pri otvaranju datoteke";
				exit(1);
			}
			Highscore_lista << "2.pokusaj" << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista << lista[i].ime << endl;
			Highscore_lista << lista[i].prezime << endl;
			Highscore_lista << lista[i].index << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista.close();
		}
		cout << "So lets begin" << endl;



		Sleep(3000);
		system("cls");
		MiniTajmer(5);
		int broj_tacnih = 0;
		int l = -1;
		cout << "Krecemo od prvog pitanja :" << endl;
		do {
			char brojcic;
			l++;
			if (l == 0) {
				brojcic = '1';

			}
			else if (l == 1) {
				brojcic = '2';
			}
			else if (l == 2) {
				brojcic = '3';
			}
			else if (l == 3) {
				brojcic = '4';
			}
			else
				brojcic = '5';


			if (brojcic == '1')
			{
				Pitanja(brojcic);
				char odg1[20];
				cin >> odg1;
				if (strcmp(odg1, "Svaki") == 0 || strcmp(odg1, "Svi") == 0) {
					cout << "Tacno!" << endl;
					broj_tacnih++;
					MiniTajmer(3);
				}
				else {
					cout << "Netacno!" << endl;
					MiniTajmer(3);
				}
			}
			else if (brojcic == '2') {
				Pitanja(brojcic);
				cout << endl;
				Pravugaonik pra;
				cout << endl;
				Trougao t;
				cout << endl;
				Kvadrat kva;
				cout << endl;
				cout << "                         NIJEDAN OD PONUDJENIH" << endl;
				cout << "Pogledajte text i velikim slovima napisite odgovor: " << endl;
				char odg2[31];
				getchar();
				cin.getline(odg2, 30);

				if (strcmp(odg2, "KVADRAT") == 0 || strcmp(odg2, "PRAVUGAONIK") == 0 || strcmp(odg2, "TROUGAO") == 0) {
					cout << "Netacno!" << endl;
					MiniTajmer(3);

				}
				else if (strcmp(odg2, "NIJEDAN OD PONUDJENIH") == 0)
				{
					cout << "Tacno!" << endl;
					broj_tacnih++;
					MiniTajmer(3);
				}
				else
				{
					cout << "Netacno!" << endl;
					MiniTajmer(3);
				}

			}
			else if (brojcic == '3')
			{
				Pitanja(brojcic);
				int odg3 = 0;
				cin >> odg3;
				if (odg3 == 8) {
					broj_tacnih++;
					cout << "Tacno!" << endl;
					MiniTajmer(3);
				}
				else {
					cout << "Netacno!" << endl;
					MiniTajmer(3);
				}
			}
			else if (brojcic == '4')
			{
				Pitanja(brojcic);
				char odg4[50];
				cin >> odg4;
				if (strcmp(odg4, "3") == 0) {
					broj_tacnih++;
					cout << "Tacno!" << endl;
				}
				else {
					cout << "Netacno!" << endl;
					MiniTajmer(3);

				}
			}
			else if (brojcic == '5') {
				Pitanja(brojcic);
				char odg5[50];
				cin >> odg5;
				if (strcmp(odg5, "3") == 0) {
					broj_tacnih++;
					cout << "Tacno!" << endl;
					MiniTajmer(3);


				}
				else
				{
					cout << "Netacno!" << endl;
					MiniTajmer(3);

				}

			}
			else
				cout << "Nije ispravno napisano!" << endl;



		} while (l < 4);
		int VasIq = 100 + broj_tacnih * 10;
		char VasIq2[30] = { "Ne vazi se drugi put :3" };


		if (i == 0) {
			Highscore_lista.open("Lista.txt", ios::app);
			if (!Highscore_lista)
			{
				cout << "Greska pri otvaranju datoteke";
				exit(1);
			}
			Highscore_lista << "1.pokusaj" << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista << "Vas iq je: " << VasIq << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista.close();
		}
		else if (i == 1)
		{
			Highscore_lista.open("Lista.txt", ios::app);
			if (!Highscore_lista)
			{
				cout << "Greska pri otvaranju datoteke";
				exit(1);
			}
			Highscore_lista << "2.pokusaj" << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista << VasIq2 << endl;
			Highscore_lista << "------------" << endl;
			Highscore_lista.close();

		}
		else

			Sleep(3000);
		system("cls");
		cout << "Vas rezultat mozete naci u datoteci." << endl;

		i++;
		delete lista;
		if (i == 1) {
			cout << "Vas Iq Test je zavrsen" << endl;
			Sleep(3000);
			break;
		}



		return 0;
	}
}