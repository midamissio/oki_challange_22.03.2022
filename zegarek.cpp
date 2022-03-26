// Zegarek.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

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
