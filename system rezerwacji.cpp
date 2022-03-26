// linie kolejowe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <map>
using namespace std;
int main()
{
	long long int ilosc_zakupow, max_w_wagonie, szukany_wagon, wagon, do_wagonu, size;
	map<long long int, int> wagony;

	cin >> ilosc_zakupow >> max_w_wagonie >> szukany_wagon;

	for (long long int i = 0; i < ilosc_zakupow; i++)
	{
		cin >> wagon >> do_wagonu;
		auto it = wagony.find(wagon);
		if (it == wagony.end())
			wagony[wagon] = do_wagonu;
		else
			wagony[wagon] += do_wagonu;
		if (wagony[wagon] > max_w_wagonie)
			wagony[wagon] -= do_wagonu;
	}

	size = wagony.size();
	cout << size << endl;
	for (auto it = wagony.begin(); it != wagony.end(); it++)
		cout << it->first << " " << it->second << endl;

	auto it = wagony.lower_bound(szukany_wagon);
	if (it == wagony.end())
		it--;
	cout << it->first << " " << it->second;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
