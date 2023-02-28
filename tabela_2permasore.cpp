#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {

    int const row = 3;
    int const column = 2;

    array<array<int, column>, row> tabela{1, 2, 3, 4, 5, 6};

    for(auto const row : tabela) {

        for(auto const shtylla : row) {
            cout << shtylla << ", ";
        }
        cout << endl;
    }
    return 0;
}