#include <iostream> // Bo tak...
#include <stdlib.h> // Bo system("CLS") jest zasobo¿erne, ale fajne
#include <string> // Bo Visual Studio jest g³upie i nie zawiera go w <iostream>

using namespace std; // Bo tak...

//Zmienne
string version_name = "v1.1.0-alfa.1"; // Bo Ordnung must sein.
int funcs = 1; // Bo gdzies musze zapisac liczbe funkcji do check_choice().
int chosen_func_number;
long chosen_func_output;

//Funckje
void main_menu(); // Bo to ³adne
int check_choice(int);
void choice_handler(int);
void output_handler(int, long);

long fibbonacci();


int main()
{
	main_menu();
	choice_handler(check_choice(funcs));
	output_handler(chosen_func_number, chosen_func_output);
	system("PAUSE");
};


void main_menu()
{
	cout << "=========================" << endl;
	cout << "Witaj w Fibbo! Ta wersja to: " << version_name << endl;
	cout << "=========================" << endl;
	cout << "Wybierz w jakim celu chcesz uzyc programu." << endl << endl;

	cout << "1. Aby wyswietlic n-ty element ciagu Fibbonacciego" << endl;

}

int check_choice(int functions)
{
	int user_choice;
	int user_stupidness = 0;

	cout << endl << "Wybierz odpowiedni numer: ";
	do
	{
		cin >> user_choice;
		cout << endl;
		if ((user_choice > functions) || (user_choice < 1))
		{
			cout << "O nie! Wybrano zly numer! I co teraz? No?" << endl;
			cout << "Chyba musisz ponownie wybrac numer. Tym razem zrob to dobrze, okej?" << endl;
			user_stupidness++;
		}
	} while ((user_choice > functions) || (user_choice < 1));
	system("CLS");
	if (user_stupidness > 0)
	{
		cout << "Gratulacje, wpisales odpowiednia liczbe za: " << user_stupidness+1 << " razem." << endl;
	}
	return user_choice;
}

void choice_handler(int checked_choice)
{
	switch (checked_choice)
	{
	case 1:
		chosen_func_number = (1);
		chosen_func_output = fibbonacci();
		break;
	default:
		break;
	}
}

void output_handler(int number, long output)
{
	switch (number)
	{
	case 1:
		if (output == 0)
		{
			cout << "Ciag nie posiada wyrazu zerowego." << endl;
		}
		else
		{
			cout << "Wartosc tego wyrazu ciagu to: " << output << endl;
		};
		break;
	default:
		break;
	}
}

long fibbonacci()
{
	int u_input;


	cout << endl << "Ktory wyraz ciagu chcesz zobaczyc?" << endl;
	cin >> u_input;
	if (u_input == 0)
	{
		return 0;
	}
	else
	{
		if ((u_input == 1) || (u_input == 2))
		{
			return 1;
		}
		else
		{
			long l1 = 1, l2 = 1;
			for (int i = 3; i <= u_input; i = i + 2)
			{
				l1 = l1 + l2;
				l2 = l2 + l1;
			};
			if (u_input % 2 == 0)
			{
				return l2;
			}
			else
			{
				return l1;
			};
		};
	};
}