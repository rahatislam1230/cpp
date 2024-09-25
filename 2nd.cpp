#include <iostream>


using namespace std;
int main() {
    double sales = 9500;
    cout << "Sales: $"<< sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "Sales: $"<< stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "Sales: $"<< countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" <<totalTax;

    return 0;

}

