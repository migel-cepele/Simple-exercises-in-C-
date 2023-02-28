#include <iostream>
using namespace std;
#include <cmath>

double calculateCharges(double x) {
    double charge;
    if (x <= 3.00){
        charge = 20.00;
    }
    else if (x >= 3.00 and x <= 4.00) {
        charge = 25.00;
    }
    else if (x >= 4.00 and x <= 5.00) {
        charge = 30.00;
    }
    else if (x >= 5.00 and x <= 6.00) {
        charge = 35.00;
    }
    else if (x >= 6.00 and x <= 7.00) {
        charge = 40.00;
    }
    else if (x >= 7.00 and x <= 8.00) {
        charge = 45.00;
    }
    else if (x >= 8.00) {
        charge = 50.00;
    }
    

    return charge;
}

int main() {
    double y, z, a;
    cout << "Vendosni oret e parkimit: " << endl;
    cin >> y >> z >> a;

    int tarifa1 = calculateCharges(y);
    int tarifa2 = calculateCharges(z);
    int tarifa3 = calculateCharges(a);

    cout << tarifa1 << endl << tarifa2 << endl << tarifa3 << endl;


    

}