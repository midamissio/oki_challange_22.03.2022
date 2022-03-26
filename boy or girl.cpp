/*
    Zadanie z platformy codeforces.com
    Nazwa zadania: Boy or Girl
    Link do zadania: https://codeforces.com/problemset/problem/236/A
    Wynik: 100/100
*/
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<char> parzyste_czy_nie;
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        parzyste_czy_nie.insert(s[i]);
    }

    if (parzyste_czy_nie.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
