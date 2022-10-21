// cw3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
   /*float f = 21.37f;
    double d = 21.37;
    int i = 2137;
    char c = 'd';
    string s = "siemaszko";
    bool p = true;
    bool v = false;*/

    //int x = 5;
    //char a = 'a';
    //x = 21.0 / 4.0;
    //cout << x+a;

    /*int a, b;
    cout << "wloz wartosci dodatnie" << endl;
    cin >> a >> b;
    if (a<0 || b<0) {
        cout << "wlozyles wartosc ujemna debilu, wloz jeszcze raz";
    }
    else {
        int c = a + b;
        cout << "suma wlozonych wartosci to: " << c;
    }*/

    /*double X = 5.64;
    double Y = 5.34;
    double suma = X + Y;
    cout << "Wynik sumy X i Y jest równy: " << suma << endl;*/

    /*int a = 12;
    int b = 15;
    cout << "Wartości przed: a = " << a << ", b = " << b << endl;
    int c = a;
    a = b;
    b = c;
    cout << "Wartości po: a = " << a << ", b = " << b << endl;*/

    /*double t;
    cout << "Wpisz temperature w Kelwinach: ";
    cin >> t;
    cout << "Temperatura w Kelwinach to: " << t << endl;
    cout << "Temperatura w Celsjuszach to: " << t - 273.15 << endl;*/

    /*int x;
    int y;

    cout << "Wpisz dzielna: ";
    cin >> x;
    cout << "Wpisz dzielnik: ";
    cin >> y;
    cout << "Wynik dzielenia to: " << x / y << endl;
    cout << "Reszta z dzielenia to: " << x % y;*/

    /*int x;
    cout << "Podaj liczbe calkowita: ";
    cin >> x;
    if (x % 2 == 0) {
        cout << "Liczba jest parzysta" << endl;
    }
    else {
        cout << "Liczba jest nieparzysta" << endl;
    }*/

    int x;
    cout << "Podaj procentowy wynik z egzaminu: ";
    cin >> x;
    if (x >= 0 && x <= 100) {

        if (x >= 90) {
            cout << "Otrzymales ocene 5";
        }
        else if (x >= 70 && x < 90) {
            cout << "Otrzymales ocene 4";
        }
        else if (x >= 50 && x < 70) {
            cout << "Otrzymales ocene 3";
        }
        else if (x < 50) {
            cout << "Otrzymales ocene 2";
        }
    }
    else {
        cout << "Podano nieprawidlowy wynik!";
    }
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
