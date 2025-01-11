#include <bits/stdc++.h>
using namespace std;
double calculateTax(double money, double taxRate, bool isEVUser) {
    double tax = (taxRate / 100) * money;

    if (isEVUser) {
        tax *= 0.95;
    }

    return tax;
}
int main() {
    double money, taxRate, taxAmount, totalAmount;
    char evUserChoice;
    bool isEVUser;
    cout << "Enter the amount of money: ";
    cin >> money;
    cout << "Enter the tax rate (as a percentage): ";
    cin >> taxRate;

    cout << "Are you an EV user? (y/n): ";
    cin >> evUserChoice;
    isEVUser = (evUserChoice == 'y' || evUserChoice == 'Y');
    taxAmount = calculateTax(money, taxRate, isEVUser);
    totalAmount = money + taxAmount;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "Total Amount after Tax: " << totalAmount << endl;

    return 0;
}
