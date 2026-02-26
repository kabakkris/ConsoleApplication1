// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln fil
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "1 - Palyginti kursa\n2 - Pirkti valiuta\n3 - Parduoti valiuta\n";
    int pasirinkimas;
    cin >> pasirinkimas;

    cout << "Pasirinkite valiuta:\n1 - GBP\n2 - USD\n3 - INR\n";
    int valiuta;
    cin >> valiuta;

    double bendras, pirkti, parduoti;
    string pavadinimas;

    if (valiuta == 1) { pavadinimas = "GBP"; bendras = 0.8729; pirkti = 0.8600; parduoti = 0.9220; }
    else if (valiuta == 2) { pavadinimas = "USD"; bendras = 1.1793; pirkti = 1.1460; parduoti = 1.2340; }
    else if (valiuta == 3) { pavadinimas = "INR"; bendras = 104.6918; pirkti = 101.3862; parduoti = 107.8546; }
    else { cout << "Neteisingas pasirinkimas!"; return 0; }

    cout << fixed << setprecision(2);

    if (pasirinkimas == 1) cout << "1 EUR = " << bendras << " " << pavadinimas;
    else if (pasirinkimas == 2) { double suma; cin >> suma; cout << suma * pirkti << " " << pavadinimas; }
    else if (pasirinkimas == 3) { double suma; cin >> suma; cout << suma / parduoti << " EUR"; }
    else cout << "Neteisingas pasirinkimas!";
}