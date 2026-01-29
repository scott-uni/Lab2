#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "=========== RECEIPT ===========\n";

    cout << left << setw(12) << "Item"
         << right << setw(6) << "Qty"
         << right << setw(10) << "Price"
         << right << setw(12) << "Subtotal" << endl;

    cout << left << setw(12) << "Burger"
         << right << setw(6) << 2
         << right << setw(10) << fixed << setprecision(2) << 4.50
         << right << setw(12) << 9.00 << endl;

    cout << left << setw(12) << "Juice"
         << right << setw(6) << 1
         << right << setw(10) << fixed << setprecision(2) << 2.00
         << right << setw(12) << 2.00 << endl;

    cout << "-------------------------------\n";

    cout << left << setw(20) << "Subtotal:"
         << right << setw(10) << fixed << setprecision(2) << 11.00 << endl;

    cout << left << setw(20) << "Tax (12%):"
         << right << setw(10) << fixed << setprecision(2) << 1.32 << endl;

    cout << left << setw(20) << "Total:"
         << right << setw(10) << fixed << setprecision(2) << 12.32 << endl;

    cout << "===============================\n";

    return 0;
}

