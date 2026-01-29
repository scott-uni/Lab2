#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << left << setw(12) << "Name"
         << right << setw(6) << "Q1"
         << right << setw(6) << "Q2"
         << right << setw(6) << "Q3"
         << right << setw(8) << "Total"
         << right << setw(8) << "Avg" << endl;

    cout << "-----------------------------------------\n";

    cout << left << setw(12) << "Ali"
         << right << setw(6) << 9
         << right << setw(6) << 8
         << right << setw(6) << 10
         << right << setw(8) << 27
         << right << setw(8) << fixed << setprecision(2) << 9.00 << endl;

    cout << left << setw(12) << "Sara"
         << right << setw(6) << 10
         << right << setw(6) << 7
         << right << setw(6) << 9
         << right << setw(8) << 26
         << right << setw(8) << fixed << setprecision(2) << 8.67 << endl;

    cout << left << setw(12) << "John"
         << right << setw(6) << 8
         << right << setw(6) << 8
         << right << setw(6) << 8
         << right << setw(8) << 24
         << right << setw(8) << fixed << setprecision(2) << 8.00 << endl;

    cout << left << setw(12) << "Lina"
         << right << setw(6) << 7
         << right << setw(6) << 9
         << right << setw(6) << 10
         << right << setw(8) << 26
         << right << setw(8) << fixed << setprecision(2) << 8.67 << endl;

    cout << left << setw(12) << "Mark"
         << right << setw(6) << 6
         << right << setw(6) << 7
         << right << setw(6) << 8
         << right << setw(8) << 21
         << right << setw(8) << fixed << setprecision(2) << 7.00 << endl;

    return 0;
}

