#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
using namespace std;

int main() {

    vector<int> numrat1(3);
    vector<int> numrat2(3);
    cout << "Vendosni numrat per numra1:" << endl;


    for (int& item : numrat1) {
        cin >> item;
    }

    for(int& item : numrat1) {
        cout << item << ", ";
    }
    cout << endl;

    cout << numrat1.size() << endl;

    cout<< "vendosni numrat per numra2: " << endl;
    for (int& item : numrat2) {
        cin >> item;
    }

    for(int& item : numrat2) {
        cout << item << ", ";
    }
    cout << endl;

    if (numrat1 != numrat2) {  //krahasojme numrat1 me numrat2
        cout << "ok" << endl;
    }

    numrat1 = numrat2; //overloadind numrat1

    for(int& item : numrat1) {
        cout << item << ", ";
    }
    cout << endl;

    numrat2.push_back(10);  //shton 10 ne fund te numrat2 dhe printon numrat2 pas shtimit
    for(int& item : numrat2) {
        cout << item << ", ";
    }
    cout << endl;






    return 0;
}