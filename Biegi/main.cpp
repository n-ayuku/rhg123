#include <iostream>
#include <fstream>
#include <vector>

#include "Administrator.h"

using namespace std;

int main()
{
	Administrator* administrator = new Administrator("admin", "123");
	vector<Biegacz*> biegacze;
	vector<Bieg*> biegi;
	vector<Rezultat*> rezultaty;

	int wybor;



	while (true)
	{
		cout << "\nZaloguj jako\n";
		cout << "1 - Administrator\n";
		cout << "2 - Biegacz\n";

		cin >> wybor;

		string login;
		string haslo;

		if (wybor == 1)
		{
			while (true)
			{
				cout << "Login: ";
				cin >> login;
				cout << "Haslo: ";
				cin >> haslo;
				if (administrator->zaloguj(login, haslo))
				{
					break;
				}
			}

			while (true)
			{
				cout << "\nWybierz akcje:\n";
				
				cout << "6 - Wyloguj\n";

				cin >> wybor;

				
				}
				 if (wybor == 6)
				{
					break;
				}
			
		}
		else if (wybor == 2)
		{
			Biegacz* biegacz = nullptr;

			while (true)
			{
				cout << "Login: ";
				cin >> login;
				cout << "Haslo: ";
				cin >> haslo;

				bool zalogowano = false;

				for (Biegacz* b : biegacze)
				{
					if (b->zaloguj(login, haslo))
					{
						biegacz = b;
						zalogowano = true;
						break;
					}
				}

				if (zalogowano)
				{
					break;
				}
			}

			while (true)
			{
				cout << "\nWybierz akcje:\n";
				
				cout << "4 - Wyloguj\n";

				cin >> wybor;

				if (wybor == 4)
				{
					break;
				}
			}
		}
	}


	
	
	return 0;
}