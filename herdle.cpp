/*
	Zadanie z platformy usaco
	Nazwa zadania: Herdle
	Link do zadania: http://usaco.org/index.php?page=viewproblem2&cpid=1179
	Wynik: 100/100
*/
#include <iostream>
#include <map>
using namespace std;
int main()
{
	char poprawna[3][3], zgadywana[3][3];
	int zielone = 0, zolte = 0;
	map<char, int>p;
	map<char, int>z;

	for (int x = 0; x < 3; x++)
		for (int y = 0; y < 3; y++)
			cin >> poprawna[x][y];
	for (int x = 0; x < 3; x++)
		for (int y = 0; y < 3; y++)
			cin >> zgadywana[x][y];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			if (poprawna[i][j] == zgadywana[i][j])
				zielone++;
			else
			{
				p[poprawna[i][j]]++;
				z[zgadywana[i][j]]++;
			}
		}
	for (auto it = p.begin(); it != p.end(); it++)
	{
		auto it2 = z.find(it->first);

		if (it2 != z.end())
			if (it2->second < it->second)
				zolte += it2->second;
			else
				zolte += it->second;
	}

	cout << zielone << endl << zolte;
	return 0;
}
