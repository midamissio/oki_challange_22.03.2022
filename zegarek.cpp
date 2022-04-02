/*
    Zadanie z platformy szkopul.edu.pl
    Nazwa zadanie: Zegarek
    Link do zadania: https://szkopul.edu.pl/problemset/problem/A859_vuqciUBllN7vf9w2NYL/site/?key=statement
    Wynik 100/100
*/
#include <iostream>
#include <string>
using namespace std;

string pad(string s, int len, string c)
{
    string r = s;
    for (int i = 0; i < len - s.length(); i++)
        r.insert(0, c);
    return r;
}


int main()
{
    int godzina, minuta, sekunda;

    cin >> godzina >> minuta >> sekunda;

    int suma = godzina * 3600 + minuta * 60 + sekunda + 1;

    int godz, min, sek;

    godz = suma / 3600;
    min = (suma - 3600 * godz) / 60;
    sek = suma - min * 60 - godz * 3600;

    godz %= 24;
    string h, m, s;

    h = pad(to_string(godz), 2, "0");
    m = pad(to_string(min), 2, "0");
    s = pad(to_string(sek), 2, "0");

    cout << h << ":" << m << ":" << s;
    return 0;
}
