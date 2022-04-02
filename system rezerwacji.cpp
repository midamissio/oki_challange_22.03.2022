/*
	Zadanie z platformy szkopul.edu
	Nazwa zadania: System rezerwacji
	Link do zadania: https://szkopul.edu.pl/problemset/problem/A859_vuqciUBllN7vf9w2NYL/site/?key=statement
	Wynik 100/100
*/
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
	return 0;
}
